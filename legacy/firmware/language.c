#include "language.h"

const char *languages[][2] = {
    //
    {" Off", "已关闭"},
    //
    {" On", "已开启"},
    // layout2.c
    {" decrypt for:", "解密"},
    // layout2.c
    {" login to:", "登录到"},
    //
    {" to", "到"},
    // recovery.c
    {"##th", "第##个"},
    // fsm_msg_coin.h
    {"Abort", "取消"},
    // menu.c
    {"About", "关于本机"},
    // layout2.c
    {"Absolute Levy", ""},
    //
    {"Access hidden wallet?", "使用隐藏钱包?"},
    // layout2.c
    {"Acitve", "激活"},
    // fsm.c
    {"Action cancelled by user", ""},  // msg
    // fsm_msg_coin.h fsm_msg_lisk.h
    {"Address:", "地址"},
    // layout2.c
    {"Again", "再次"},
    // menu_list.c
    {"All data on the device will be erased if the device is reset, and this "
     "operation cannot be reversed.",
     "重置设备将抹除本机所有数据,本操作不可撤销"},

    // fsm_msg_common.h
    {"All data will be lost.", "所有数据将丢失"},
    // u2f.c
    {"Already registered.", "已注册"},
    // u2f.c
    {"Another U2F device", "另外的U2F设备"},
    //
    {"Are you sure to reset?", "确定要重置吗?"},
    //
    {"Are you sure to update?", "确定升级固件吗?"},
    {"Are you sure you want to reset your device?", "确定要重置吗?"},
    // u2f.c
    {"Authenticate", "认证"},
    // fsm_msg_common.h
    {"Auto-lock delay too long", ""},  // msg
    // fsm_msg_common.h
    {"Auto-lock delay too short", ""},  // msg
    //
    {"AutoLock", "锁定时间"},
    // layout2.c
    {"BACKUP FAILED!", "备份失败"},
    // layout2.c
    {"BLE Name:", "蓝牙名称:"},
    // layout2.c
    {"BLE enable:", "使用蓝牙:"},
    // layout2.c
    {"BLE version:", "蓝牙版本:"},
    // recovery.c
    {"Back", "返回"},
    // layout2.c
    {"Backup Only", "仅备份"},
    // menu_list.c
    {"Before you reset the device, please ensure you've backed up your "
     "recovery phrase",
     "在重置设备前,请确保您仍掌握该助记词的物理备份."},
    //
    {"Before your start", "继续操作前"},
    // layout2.c layout2.c
    {"Bluetooth", "蓝牙"},
    // signing.c
    {"Both address and address_n provided.", ""},  // msg
    // signing.c
    {"Branch ID must be set.", ""},  // msg
    // signing.c signing.c
    {"Branch ID not enabled on this coin.", ""},  // msg
    {"Brightness", "亮度"},
    // fsm.c
    {"Button expected", ""},  // msg
    // recovery.c reset.c
    {"By continuing you", " "},
    // fsm_msg_common.h
    {"Can't change se setting after device initialized", ""},  // msg
    // fsm_msg_coin.h
    {"Can't encode address", ""},  // msg
    // ethereum.c ethereum.c ethereum.c layout2.c layout2.c
    // layout2.c layout2.c layout2.c layout2.c layout2.c
    // layout2.c layout2.c layout2.c layout2.c layout2.c
    // layout2.c layout2.c layout2.c layout2.c layout2.c
    // layout2.c layout2.c layout2.c layout2.c
    // layout2.c
    // layout2.c layout2.c layout2.c layout2.c
    // layout2.c
    // layout2.c layout2.c layout2.c lisk.c lisk.c
    // lisk.c lisk.c lisk.c lisk.c c c
    // protect.c recovery.c reset.c reset.c signing.c
    // trezor.c fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h
    {"Cancel", "取消"},
    // ethereum.c
    {"Chain Id out of bounds", ""},  // msg
    //
    {"Change PIN", "修改PIN码"},
    // layout2.c
    {"Change language to", "设置语言为"},
    //
    {"Check Mnemonic", "查看助记词"},
    //
    {"Check PIN Code", "请先校验设备原PIN码"},
    //
    {"Check the entered", "请检查输入的"},
    {"Check that the 12 words you entered are the correct recovery phrase",
     "重新检查已输入的12个单词,确保它是正确的助记词"},
    {"Check that the 18 words you entered are the correct recovery phrase",
     "重新检查已输入的18个单词,确保它是正确的助记词"},
    {"Check that the 24 words you entered are the correct recovery phrase",
     "重新检查已输入的24个单词,确保它是正确的助记词"},
    {"Check the recovery phrase once more, and compare it to the backup copy "
     "in your hand. Make sure the spelling and order are identical.",
     "再次查看助记词,并与手中的备份进行核对,确保二者完全一致"},
    //
    {"Check the seed", "检查助记词"},
    // layout2.c
    {"Check the written", "请检查写下的"},
    {"Choose the correct words based on the recovery phrase you've put down.",
     "接下来,请根据已写下的助记词,选择正确的单词"},
    // layout2.c
    {"CoSi commit index #?", ""},
    // layout2.c
    {"CoSi commit message?", ""},
    // layout2.c
    {"CoSi sign index #?", ""},
    // layout2.c
    {"CoSi sign message?", ""},
    // fsm_msg_coin.h
    {"Computing address", "生成地址中"},
    // ethereum.c ethereum.c ethereum.c layout2.c layout2.c
    // layout2.c layout2.c layout2.c layout2.c layout2.c
    // layout2.c layout2.c layout2.c layout2.c layout2.c
    // layout2.c layout2.c layout2.c layout2.c layout2.c
    // layout2.c layout2.c layout2.c layout2.c
    // layout2.c
    // layout2.c layout2.c lisk.c lisk.c lisk.c lisk.c
    // lisk.c lisk.c c protect.c protect.c
    // protect.c
    // recovery.c recovery.c recovery.c recovery.c reset.c
    // signing.c fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    {"Confirm", "确认"},
    // layout2.c
    {"Confirm OMNI Transaction:", "确认 OMNI 交易"},
    // layout2.c
    {"Confirm OP_RETURN:", "确认 OP_RETURN"},
    // layout2.c lisk.c
    {"Confirm address?", "确认地址"},
    // layout2.c lisk.c
    {"Confirm sending", "确认发送"},
    // lisk.c lisk.c lisk.c lisk.c
    {"Confirm transaction", "确认交易"},
    // layout2.c layout2.c layout2.c
    {"Confirm transfer of", "确认转移"},
    // layout2.c lisk.c reset.c fsm_msg_coin.h
    {"Continue", "继续"},
    // fsm_msg_coin.h
    {"Continue at your", "继续"},
    // fsm_msg_common.h
    {"Continue only if you", "继续"},
    // layout2.c
    {"Continue?", "继续"},
    // layout2.c
    {"Create", "创建新钱包"},
    {"Dashboard", "控制中心"},
    // fsm.c
    {"Data error", "数据错误"},
    // ethereum.c
    {"Data length exceeds limit", ""},  // msg
    // ethereum.c
    {"Data length provided, but no initial chunk", ""},  // msg
    // signing.c
    {"Decred details provided but Decred coin not specified.", ""},  // msg
    // signing.c
    {"Decred script version does not match previous output", ""},  // msg
    // layout2.c
    {"Decrypt for:", "解密"},
    // layout2.c
    {"Decrypt value of this key?", "为该值解密"},
    // layout2.c
    {"Decrypted message", "解密消息"},
    // layout2.c
    {"Decrypted signed message", "解密签名消息"},
    // layout2.c
    {"Device ID:", "设备ID:"},
    // reset.c reset.c
    {"Device failed initialized", ""},  // msg
    //
    {"Device has been reset", "设备已重置"},
    // fsm.c
    {"Device is already initialized. Use Wipe first.", ""},  // msg
    // fsm_msg_common.h fsm_msg_common.h
    {"Device loaded", ""},  // msg
    // config.c fsm.c
    {"Device not initialized", ""},  // msg
    // recovery.c
    {"Device recovered", ""},  // msg
    //
    {"Device reset in progress", "设备重置中"},
    // reset.c reset.c reset.c fsm_msg_common.h
    {"Device successfully initialized", ""},  // msg
    // fsm_msg_common.h
    {"Device wiped", ""},  // msg
    // layout2.c lisk.c recovery.c reset.c trezor.c
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    // fsm_msg_common.h fsm_msg_common.h fsm_msg_common.h
    {"Do you really want to", "请确认"},
    // fsm_msg_common.h
    {"Do you want to", "请确认"},
    // layout2.c
    {"Do you want to decrypt?", "请确认解密"},
    // fsm_msg_common.h
    {"Do you want to set", "请确认设置"},
    // layout2.c
    {"Do you want to sign in?", "请确认登录"},
    //
    {"Done", "完成"},
    {"Download Onekey", "下载Onekey"},
    // menu_list.c
    {"Download Onekey Apps", "官网下载Onekey客户端"},
    // ethereum.c
    {"Empty data chunk received", ""},  // msg
    // signing.c signing.c
    {"Encountered invalid prevhash", ""},  // msg
    // layout2.c
    {"Encrypt message?", "加密消息"},
    // layout2.c
    {"Encrypt value of this key?", "为这个值加密"},
    // layout2.c
    {"Encrypt+Sign message?", "加密+签名消息"},
    // layout2.c
    {"Encrypted hex data", "加密十六进制数据"},
    // layout2.c
    {"Encrypted message", "加密信息"},
    // layout2.c layout2.c
    {"English", "简体中文"},
    //
    {"Enter PIN to unlock", "输入PIN码解锁"},
    // protect.c
    {"Enter new wipe code:", "输入新的擦除PIN码"},
    {"Enter recovery phrase", "输入助记词"},
    //
    {"Enter seed phrase ", "输入助记词"},
    //
    {"Enter seed phrases to", "输入助记词"},
    // fsm_msg_common.h
    {"Entory data error", ""},  // msg
    // fsm_msg_coin.h
    {"Error computing address", ""},  // msg
    // signing.c
    {"Error computing multisig fingerprint", ""},
    // fsm_msg_crypto.h
    {"Error getting ECDH session key", ""},  // msg
    // fsm_msg_crypto.h
    {"Error signing identity", ""},  // msg
    // fsm_msg_coin.h
    {"Error signing message", ""},  // msg
    //
    {"Exit", "退出"},
    // signing.c
    {"Expected input with amount", ""},  // msg
    // signing.c fsm_msg_coin.h
    {"Expiry not enabled on this coin.", ""},  // msg
    // signing.c
    {"Extra data not enabled on this coin.", ""},  // msg
    // signing.c signing.c signing.c signing.c
    // signing.c
    // signing.c
    {"Failed to compile input", ""},  // msg
    // signing.c signing.c signing.c
    {"Failed to compile output", ""},  // msg
    // fsm.c
    {"Failed to derive private key", ""},  // msg
    // signing.c
    {"Failed to serialize extra data", ""},  // msg
    // signing.c signing.c signing.c
    {"Failed to serialize input", ""},  // msg
    // signing.c
    {"Failed to serialize multisig script", ""},  // msg
    // signing.c signing.c
    {"Failed to serialize output", ""},  // msg
    // recovery.c reset.c reset.c fsm_msg_common.h
    // fsm_msg_common.h
    {"Failed to store mnemonic", ""},  // msg
    // menu.c
    {"Fastpay", "快捷支付"},
    // layout2.c
    {"Fee", "手续费"},
    // layout2.c
    {"Fee included:", "已包含手续费"},
    // layout2.c
    {"Finish", "完成"},
    // fsm.c
    {"Firmware error", "固件错误"},
    // layout2.c
    {"Firmware version:", "固件版本:"},
    // fsm_msg_common.h
    {"Flags applied", ""},  // msg
    //
    // reset.c
    {"Follow the guide to create new wallet", "请跟随引导创建新钱包"},
    // recovery.c
    {"Follow the guide to recover your wallet",
     "请跟随引导,依次输入助记恢复钱包"},
    {"Follow the prompts", "按照屏幕提示"},
    //
    {"Font:", "字体支持:"},
    //
    {"For more information", "了解更多"},
    // fsm_msg_common.h
    {"Forbidden field set in dry-run", ""},  // msg
    // layout2.c
    {"GPG sign for:", ""},
    // layout2.c
    {"Guide", "使用教程"},
    {"High", "高"},
    // layout2.c c fsm_msg_common.h
    {"I take the risk", "确认风险"},
    // recovery.c
    {"INVALID!", "不可用"},
    // fsm_msg_common.h
    {"If import seed,", "如果导入种子"},
    //
    {"Inconsistent PIN code", "PIN码前后不一致"},
    // recovery.c
    {"Incorrect recovery phrase. Try again.", "助记词不正确,请重试"},
    // fsm_msg_ethereum.h
    {"Invalid address", ""},  // msg
    // signing.c
    {"Invalid amount specified", ""},  // msg
    // fsm.c
    {"Invalid coin name", ""},  // msg
    // fsm_msg_coin.h
    {"Invalid combination of coin and script_type", ""},  // msg
    // fsm_msg_crypto.h
    {"Invalid global commitment", ""},  // msg
    // fsm_msg_crypto.h
    {"Invalid global pubkey", ""},  // msg
    // fsm_msg_crypto.h fsm_msg_crypto.h
    {"Invalid identity", ""},  // msg
    // lisk.c
    {"Invalid recipient_id", ""},  // msg
    //
    {"Invalid seed phrases", "助记词无效"},
    // fsm_msg_common.h
    {"Invalid seed strength", ""},  // msg
    // recovery.c
    {"Invalid seed, are words in correct order?", ""},  // msg
    // fsm.c fsm_msg_coin.h fsm_msg_ethereum.h fsm_msg_lisk.h
    {"Invalid signature", ""},  // msg
    // ethereum.c
    {"Invalid size of initial chunk", ""},  // msg
    // lisk.c lisk.c
    {"Invalid transaction type", ""},  // msg
    // fsm_msg_common.h
    {"Invalid word count", ""},  // msg
    // layout2.c
    {"Label:", "设备名称:"},
    // layout2.c layout2.c
    {"Language", "语言"},
    // layout2.c
    {"Levy is", ""},
    {"Low", "低"},
    // fsm_msg_common.h
    {"Loading private seed", "导入私钥"},
    // trezor.c
    {"Lock Device", "锁定设备"},
    //
    {"Locktime for this", "该交易时间锁定"},
    // layout2.c
    {"Login to:", "登录到"},
    //
    {"Make sure you still have", "请确保您仍掌握"},
    // ethereum.c
    {"Malformed address", ""},
    // ethereum.c
    {"Malformed signature", ""},
    {"Medium", "中"},
    // layout2.c lisk.c
    {"Message signed by:", ""},
    // messages.c
    {"Message too big", ""},
    // fsm_msg_coin.h fsm_msg_ethereum.h fsm_msg_lisk.h
    {"Message verified", ""},
    // signing.c
    {"Missing address", ""},
    // signing.c signing.c signing.c
    {"Mixing segwit and non-segwit inputs is not allowed", ""},
    //
    {"Mnemonic", "助记词"},
    //
    {"Mnemonic verified pass", "助记词校验通过"},
    // fsm_msg_common.h fsm_msg_common.h
    {"Mnemonic with wrong checksum provided", ""},
    // layout2.c
    {"Mosaic", ""},
    // layout2.c
    {"Mosaic Description", ""},
    // signing.c signing.c
    {"Multisig field provided but not expected.", ""},
    // layout2.c
    {"Need Backup", "未备份"},
    //
    {"Never", "永不"},
    // layout2.c
    {"Next", "继续"},
    //
    {"Next screen will show", "下一屏幕将显示"},
    // layout2.c layout2.c layout2.c layout2.c layout2.c
    // layout2.c layout2.c layout2.c layout2.c
    // layout2.c
    // layout2.c c c c c c
    {"No", "否"},
    // fsm_msg_coin.h fsm_msg_ethereum.h
    {"No address provided", ""},
    // fsm_msg_crypto.h fsm_msg_crypto.h
    {"No data provided", ""},
    // fsm_msg_crypto.h
    {"No key provided", ""},
    // fsm_msg_coin.h fsm_msg_ethereum.h
    {"No message provided", ""},
    // protect.c
    {"No passphrase provided. Use empty string to set an empty passphrase.",
     ""},
    // fsm_msg_common.h
    {"No setting provided", ""},
    // fsm_msg_coin.h
    {"No transaction provided", ""},
    // fsm_msg_crypto.h
    {"No value provided", ""},
    // layout2.c
    {"Not Actived", "未激活"},
    // fsm.c signing.c
    {"Not enough funds", ""},
    // signing.c
    {"Not enough outputs in previous transaction.", ""},
    // ethereum.c
    {"Not in Ethereum signing mode", ""},
    // recovery.c
    {"Not in Recovery mode", ""},
    // reset.c
    {"Not in Reset mode", ""},
    // signing.c
    {"Not in Signing mode", ""},
    // u2f.c
    {"Not registered.", ""},
    // layout2.c u2f.c u2f.c fsm_msg_common.h
    {"OK", "确认"},
    // signing.c
    {"OP RETURN data provided but not OP RETURN script type.", ""},
    // signing.c
    {"OP_RETURN output with address or multisig", ""},
    // signing.c
    {"OP_RETURN output with non-zero amount", ""},
    //
    {"Off", "关闭"},
    //
    {"Okay", "确认"},
    //
    {"On", "开启"},
    // signing.c
    {"Output's address_n provided but not expected.", ""},
    // protect.c protect.c protect.c protect.c protect.c
    // fsm.c
    {"PIN cancelled", ""},
    // fsm_msg_common.h
    {"PIN code change", "PIN码修改"},
    //
    {"PIN code set", "PIN设置"},
    // fsm.c
    {"PIN expected", ""},
    // fsm.c
    {"PIN invalid", "PIN码错误"},
    {"PIN is used to unlock your device. Please keep it safe.",
     "PIN码用于解锁设备,请妥善保管."},
    // fsm.c
    {"PIN mismatch", "两次输入不相同"},
    // fsm_msg_common.h fsm_msg_common.h
    {"PIN removed", ""},
    // protect.c
    {"PINs do not match. Please enter again.",
     "PIN码前后输入不一致,请重新输入."},
    //
    {"Page down", "下一页"},
    //
    {"Page up", "上一页"},
    // layout2.c
    {"Path: m", ""},
    // layout2.c
    {"Percentile Levy", ""},
    // protect.c protect.c
    {"Please confirm PIN", "请确认PIN码"},
    {"Please copy the following 12 words in order",
     "请按顺序抄写以下12位助记词"},
    {"Please copy the following 18 words in order",
     "请按顺序抄写以下18位助记词"},
    {"Please copy the following 24 words in order",
     "请按顺序抄写以下24位助记词"},
    // protect.c
    {"Please enter current PIN", "请输入当前PIN码"},
    // recovery.c
    {"Please enter your 12 words recovery phrase in order",
     "请依次输入12位助记词"},
    {"Please enter your 18 words recovery phrase in order",
     "请依次输入18位助记词"},
    {"Please enter your 24 words recovery phrase in order",
     "请依次输入24位助记词"},
    // protect.c
    {"Please enter new PIN", "请输入新PIN码"},
    // recovery.c
    {"Please enter the", "请输入"},
    // protect.c
    {"Please enter your", "请输入你的"},
    // protect.c
    {"Please enter your PIN:", "请输入PIN码"},
    // layout2.c
    {"Please input PIN", "请输入PIN码"},
    // protect.c
    {"Please re-enter new PIN", "请再次输入新PIN码"},
    //
    {"Please reboot", "按确认将重启"},
    // bl_check.c
    {"Please reconnect", ""},
    // recovery.c
    {"Please select the", "请选择"},
    // protect.c
    {"Please select the number of recovery phrase words you want",
     "选择助记词位数"},
    //
    {"Please set the PIN", "请设置PIN码"},
    // protect.c
    {"Please set your PIN", "请设置PIN码"},
    {"Please set your PIN.\nPIN is the only way to unlock your device. You "
     "can't retrieve your pin if you forget it.",
     "请设置PIN码.\nPIN码用于解锁设备,一旦遗忘无法找回."},
    //
    {"Please try again", "请重新输入"},
    // protect.c
    {"Please wait", "请等待"},
    //
    {"Press", "按"},
    //
    {"Press any key to continue", "按任意键继续"},
    //
    {"Prev", "后退"},
    // fsm.c
    {"Process error", ""},
    // storage.c
    {"Processing", "处理中"},
    // signing.c
    {"Pubkey not found in multisig script", ""},
    // lisk.c
    {"Public Key:", "公钥"},
    // layout2.c
    {"QR Code", "二维码"},
    // layout2.c
    {"Quota:", "单次限额"},
    // layout2.c
    {"Raw levy value is", ""},
    // protect.c
    {"Enter your PIN again", "再次输入PIN码"},
    // protect.c
    {"Re-enter new wipe code:", ""},
    // ethereum.c layout2.c
    {"Really send", ""},
    // reset.c
    {"Recovery Phrase", "助记词"},
    {"Recovery Phrase verified pass", "助记词校验通过"},
    // u2f.c
    {"Register", "注册"},
    // layout2.c
    {"Remaining times:", "剩余次数"},
    //
    {"Reset", "重置设备"},
    //
    {"Reset ", "重置"},
    {"Reset successfully. Please restart the device.", "重置成功,请重启."},
    //
    {"Restore", "恢复钱包"},
    //
    {"Retry", "重试"},
    // layout2.c
    {"SE version:", "SE版本:"},
    // layout2.c
    {"SEEDLESS", ""},
    // ethereum.c
    {"Safety check failed", ""},
    //
    {"Scan the QR code below", "扫描下方二维码"},
    //
    {"Security", "安全"},
    //
    {"Seed Phrase", "助记词"},
    // reset.c
    {"Seed already backed up", ""},
    // reset.c
    {"Seed successfully backed up", ""},
    // signing.c
    {"Segwit input without amount", ""},
    // signing.c
    {"Segwit not enabled on this coin", ""},
    {"Select correct word below", "按提示选择正确的单词"},
    //
    {"Select your", "选择你的"},
    // ethereum.c
    {"Send", ""},
    // layout2.c
    {"Send anyway?", ""},
    // layout2.c
    {"Serial:", "序列号:"},
    // fsm_msg_common.h
    {"Session cleared", ""},
    // layout2.c
    {"Set auto power off time", "设置自动关机时间"},
    {"Set the PIN", "设置PIN码"},
    // menu.c
    {"Settings", "设置项"},
    // fsm_msg_common.h
    {"Settings applied", ""},
    // layout2.c layout2.c
    {"Shutdown", "自动关机"},
    // layout2.c
    {"Sign binary message?", ""},
    // layout2.c
    {"Sign message?", "签名消息"},
    // ethereum.c ethereum.c ethereum.c ethereum.c lisk.c
    {"Signing", "签名中"},
    // signing.c
    {"Signing error", ""},
    // ethereum.c ethereum.c signing.c
    {"Signing failed", ""},
    // lisk.c signing.c signing.c signing.c signing.c
    // signing.c signing.c signing.c signing.c
    {"Signing transaction", "签名交易中"},
    // layout2.c
    {"Simple send of ", ""},
    // fsm_msg_coin.h fsm_msg_crypto.h
    {"Singing", ""},
    // layout2.c
    {"Skip button confirm:", "跳过确认"},
    // layout2.c
    {"Skip pin check:", "免密支付"},
    //
    {"Sleep Mode", "休眠模式"},
    // storage.c
    {"Starting up", "启动中"},
    // config.c
    {"Storage failure", ""},
    // protect.c
    {"The new PIN must be different from your wipe code.", ""},
    // recovery.c
    {"The seed is", "种子"},
    // recovery.c recovery.c
    {"The seed is valid", ""},
    // recovery.c
    {"The seed is valid and matches the one in the device", ""},
    // recovery.c
    {"The seed is valid but does not match the one in the device", ""},
    //
    {"The seed phrases are the", " "},
    // protect.c
    {"The wipe code must be different from your PIN.", ""},
    // u2f.c
    {"This U2F device is", ""},
    //
    {"This cannot be undo!", "本操作不可撤销!"},
    // protect.c fsm_msg_common.h
    {"This firmware is incapable of passphrase entry on the device.", ""},
    // signing.c fsm_msg_coin.h
    {"Timestamp must be set.", ""},
    // signing.c fsm_msg_coin.h
    {"Timestamp not enabled on this coin.", ""},
    {"To learn more about how to use, go to the Help Center.",
     "了解如何使用,请前往帮助中心"},
    // ethereum.c
    {"Too much data", ""},
    // ethereum.c
    {"Transaction data:", ""},
    // signing.c signing.c signing.c
    {"Transaction has changed during signing", ""},
    // fsm_msg_coin.h
    {"Transaction must have at least one input", ""},
    // fsm_msg_coin.h
    {"Transaction must have at least one output", ""},
    // ethereum.c
    {"Txtype out of bounds", ""},
    // fsm_msg_common.h
    {"U2F counter set", ""},
    // layout2.c
    {"U2F security key?", ""},
    // layout2.c
    {"Unencrypted hex data", ""},
    // layout2.c
    {"Unencrypted message", ""},
    // fsm.c
    {"Unexpected message", ""},
    // layout2.c
    {"Unknown Mosaic", ""},
    // bl_check.c
    {"Unknown bootloader", ""},
    // layout2.c
    {"Unknown long path", ""},
    // messages.c messages.c
    {"Unknown message", ""},
    // layout2.c
    {"Unknown transaction", ""},
    // bl_check.c bl_check.c
    {"Unplug your Trezor", ""},
    // config.c
    {"Unsupported curve", ""},
    // signing.c
    {"Unsupported transaction version.", ""},
    // signing.c
    {"Unsupported version for overwintered transaction", ""},
    // bl_check.c
    {"Update finished", ""},
    // config.c
    {"Updating", "更新"},
    // bl_check.c
    {"Updating bootloader", ""},
    // layout2.c
    {"Use SE:", "使用SE:"},
    //
    {"Use this passphrase?", "确认密语"},
    // fsm_msg_crypto.h
    {"Value length must be a multiple of 16", ""},
    // signing.c signing.c signing.c signing.c signing.c
    // signing.c fsm_msg_coin.h
    {"Value overflow", ""},
    // layout2.c
    {"Verified binary message", ""},
    // layout2.c
    {"Verified message", ""},
    // fsm_msg_coin.h
    {"Verifying", ""},
    // storage.c
    {"Verifying PIN", "校验PIN"},
    // signing.c
    {"Version group ID must be set when version >= 3.", ""},
    // signing.c
    {"Version group ID must be set.", ""},
    // signing.c signing.c
    {"Version group ID not enabled on this coin.", ""},
    // config.c
    {"Waking up", "唤醒"},
    //
    {"Wallet Recovery Success", "钱包恢复成功"},
    //
    {"Wallet created success", "钱包创建成功"},
    // layout2.c
    {"Warning!", "警告"},
    // layout2.c
    {"Web sign in to:", ""},
    // fsm_msg_common.h
    {"Wipe code changed", ""},
    // fsm.c
    {"Wipe code mismatch", ""},
    // fsm_msg_common.h fsm_msg_common.h
    {"Wipe code removed", ""},
    // fsm_msg_common.h
    {"Wipe code set", ""},
    // recovery.c
    {"Word not found in a wordlist", ""},
    //
    {"Write down", "请抄写助记词"},
    // layout2.c
    {"Write down your ", "请抄写你的"},
    //
    {"Wrong PIN for ", "您已输错"},
    // fsm_msg_coin.h
    {"Wrong address path", ""},
    // signing.c signing.c
    {"Wrong input script type", ""},
    {"Wrong mnemonic", "错误的助记词"},
    {"Wrong recovery phrase", "错误的助记词"},
    // recovery.c
    {"Wrong word retyped", ""},
    // layout2.c layout2.c layout2.c layout2.c
    // layout2.c
    {"Yes", "是"},
    //
    {"You still have 9 times", "连续输入10次将重置设备"},
    // recovery.c
    {"Your wallet has successfully restored", "钱包恢复成功"},
    // layout2.c
    {"active device", "激活设备"},
    // fsm_msg_common.h
    {"addres is existed", ""},
    // fsm_msg_common.h fsm_msg_common.h
    {"addres is null", ""},
    // fsm_msg_common.h
    {"addres space is full", ""},
    // layout2.c
    {"after ", ""},
    // recovery.c reset.c
    {"agree to trezor.io/tos", " "},
    // u2f.c
    {"already registered", "已注册"},
    // recovery.c
    {"and MATCHES", ""},
    // layout2.c
    {"and levy of", ""},
    // layout2.c c c
    {"and network fee of", ""},
    // fsm_msg_common.h
    {"answer to ping?", ""},
    //
    {"asset,Keep it safe", "凭证,请妥善保管"},
    // layout2.c
    {"auto-lock your device", ""},
    //
    {"backup of seed phrases", "助记词的物理备份"},
    // fsm_msg_common.h
    {"backup only", "仅备份"},
    //
    {"blockheight:", "区块高度:"},
    // bl_check.c
    {"broken.", ""},
    // recovery.c
    {"but does NOT MATCH", ""},
    //
    {"chances", "次机会"},
    // fsm_msg_common.h
    {"change bluetooth", ""},
    // fsm_msg_common.h
    {"change current PIN?", "修改PIN码"},
    // fsm_msg_common.h
    {"change fastpay settings", "修改快捷支付"},
    // fsm_msg_common.h
    {"change language to", "修改语言为"},
    // fsm_msg_common.h
    {"change name to", "修改名称为"},
    // fsm_msg_common.h
    {"change the current", ""},
    // fsm_msg_common.h
    {"change the home screen", "修改屏保"},
    // layout2.c
    {"change-outputs.", ""},
    // signing.c
    {"changed", "修改"},
    // bl_check.c bl_check.c
    {"contact our support.", ""},
    // reset.c
    {"create a new wallet?", "创建新的钱包?"},
    // bl_check.c config.c
    {"detected.", ""},
    // fsm_msg_common.h fsm_msg_common.h
    {"device initialied success", ""},
    // fsm_msg_common.h
    {"device is used for", "设备用于"},
    // fsm_msg_common.h
    {"disable passphrase", "禁用密语"},
    // fsm_msg_common.h
    {"disable wipe code", ""},
    // fsm_msg_common.h fsm_msg_common.h
    {"doing!", "操作"},
    // fsm_msg_common.h
    {"enable passphrase", "使用密语"},
    // lisk.c
    {"fee:", "手续费"},
    // ethereum.c
    {"for gas?", ""},
    // fsm_msg_coin.h
    {"for selected coin.", ""},
    // layout2.c
    {"from your wallet?", "从钱包中"},
    // layout2.c
    {"hour", "小时"},
    //
    {"hours", "小时"},
    // recovery.c
    {"imported succeed", "导入成功"},
    // layout2.c
    {"in", ""},
    // layout2.c
    {"in raw units of", ""},
    // layout2.c
    {"in the same mosaic", ""},
    // u2f.c u2f.c
    {"in this application.", ""},
    // fsm_msg_common.h
    {"increase and retrieve", ""},
    // fsm_msg_common.h
    {"is not recommended.", ""},
    // layout2.c
    {"is unexpectedly high.", "过高"},
    // protect.c
    {"keyboard.", "键盘"},
    // fsm_msg_common.h fsm_msg_common.h
    {"know what you are", "清楚你的"},
    // trezor.c
    {"lock your Trezor?", "锁定设备"},
    // ethereum.c ethereum.c
    {"message", "消息"},
    // layout2.c
    {"minute", "分钟"},
    //
    {"minutes", "分钟"},
    //
    {"mnemonic", "助记词"},
    //
    {"number of Mnemonic", "助记词位数"},
    // recovery.c
    {"of your mnemonic", "助记词"},
    // recovery.c
    {"on your computer", "在电脑上"},
    //
    {"only way to recover your", "助记词是找回资产唯一"},
    // fsm_msg_coin.h
    {"own risk!", "风险"},
    // protect.c
    {"passphrase using", "密语"},
    // ethereum.c
    {"paying up to", ""},
    // fsm_msg_common.h fsm_msg_common.h
    {"protection?", "保护"},
    // layout2.c
    {"raw units of", ""},
    // fsm_msg_common.h
    {"reboot start", ""},
    // recovery.c
    {"recover the device?", "恢复钱包"},
    {"recovery phrase", "助记词"},
    // lisk.c
    {"register a delegate?", ""},
    // fsm_msg_common.h
    {"remove current PIN?", ""},
    // fsm_msg_common.h
    {"restore data err", ""},
    //
    {"restore wallet", "恢复已拥有的钱包"},
    // layout2.c
    {"s", "秒"},
    // layout2.c protect.c
    {"second", "秒"},
    // fsm_msg_common.h
    {"seed import failed", ""},
    // fsm_msg_common.h
    {"seed import success", ""},
    //
    {"seed phrases", "助记词"},
    // signing.c
    {"segwit input amount", ""},
    // fsm_msg_common.h
    {"send entropy?", "发送熵值"},
    // fsm_msg_common.h
    {"set a new wipe code?", ""},
    // fsm_msg_common.h
    {"set new PIN?", "设置PIN码"},
    // fsm_msg_common.h
    {"status always?", ""},
    // bl_check.c
    {"successfully", "成功"},
    // fsm_msg_common.h fsm_msg_common.h
    {"the U2F counter?", ""},
    // protect.c
    {"the computer's", "使用电脑的"},
    // recovery.c recovery.c
    {"the one in the device.", ""},
    //
    {"the passphrase!", "密语"},
    // layout2.c
    {"the same mosaic", ""},
    //
    {"times", "次"},
    //
    {"timestamp:", "时间戳:"},
    {"to back", "键返回"},
    {"to cancel", "键取消/返回"},
    {"to confirm", "键确认"},
    {"to confirm ", "键确认/下一步"},
    // protect.c
    {"to continue ...", " "},
    //
    {"to creat wallet", "开始创建新钱包"},
    // ethereum.c
    {"to new contract?", "新合约"},
    //
    {"to scroll down", "键下一页"},
    //
    {"to scroll up", "键上一页"},
    //
    {"to try", " "},
    // lisk.c
    {"to:", ""},
    // ethereum.c
    {"token", "代币"},
    //
    {"transaction is set to", "被设定为"},
    // layout2.c layout2.c
    {"user: ", "用户:"},
    // u2f.c
    {"was used to register", "注册"},
    // fsm_msg_common.h
    {"wipe code?", "擦除PIN码"},
    // fsm_msg_common.h
    {"wipe the device?", "擦除设备"},
    //
    {"word", "单词"},
    //
    {"you still have ", "还有"}};

int LANGUAGE_ITEMS = sizeof(languages) / sizeof(languages[0]);
