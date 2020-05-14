# Automatically generated by pb2py
# fmt: off
from .. import protobuf as p

if __debug__:
    try:
        from typing import Dict, List  # noqa: F401
        from typing_extensions import Literal  # noqa: F401
    except ImportError:
        pass


class BixinVerifyDeviceRequest(p.MessageType):
    MESSAGE_WIRE_TYPE = 909

    def __init__(
        self,
        data: bytes = None,
    ) -> None:
        self.data = data

    @classmethod
    def get_fields(cls) -> Dict:
        return {
            1: ('data', p.BytesType, 0),  # required
        }
