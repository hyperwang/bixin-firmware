from trezor import wire
from trezor import ui
from trezor.utils import unimport_gen


@unimport_gen
def confirm(content=None, code=None):
    from trezor.ui.confirm import ConfirmDialog, CONFIRMED
    from trezor.messages.ButtonRequest import ButtonRequest
    from trezor.messages.ButtonRequestType import Other
    from trezor.messages.ButtonAck import ButtonAck

    dialog = ConfirmDialog(content)
    dialog.render()

    if code is None:
        code = Other
    ack = yield from wire.call(ButtonRequest(code=code), ButtonAck)
    res = yield from dialog.wait()

    return res == CONFIRMED
