#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkMemBankLoader {
    IL2CPP_REGISTER_METHOD(0x026F9230, void, Start, (app::AkMemBankLoader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F9420, void, LoadNonLocalizedBank, (app::AkMemBankLoader * this_ptr, app::String* in_bank_filename))
    IL2CPP_REGISTER_METHOD(0x026F9520, void, LoadLocalizedBank, (app::AkMemBankLoader * this_ptr, app::String* in_bank_filename))
    IL2CPP_REGISTER_METHOD(0x026F9660, uint32_t, AllocateAlignedBuffer, (app::AkMemBankLoader * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHODINFO(0x0471FA28, AkMemBankLoader_AllocateAlignedBuffer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x026F97D0, app::IEnumerator*, LoadFile, (app::AkMemBankLoader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F9920, void, DoLoadBank, (app::AkMemBankLoader * this_ptr, app::String* in_bank_path))
    IL2CPP_REGISTER_METHOD(0x026F9A70, void, OnDestroy, (app::AkMemBankLoader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026F9C30, void, ctor, (app::AkMemBankLoader * this_ptr))
} // namespace app::classes::AkMemBankLoader
