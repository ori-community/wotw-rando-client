#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Mime::WriteStateInfoBase {
    IL2CPP_REGISTER_METHOD(0x01E6ECF0, void, ctor, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_FooterLength, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Byte__Array*, get_Footer, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Byte__Array*, get_Header, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Byte__Array*, get_Buffer, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_Length, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentLineLength, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6EDB0, void, EnsureSpaceInBuffer, (app::WriteStateInfoBase * this_ptr, int32_t more_bytes))
    IL2CPP_REGISTER_METHOD(0x01E6EEA0, void, Append_1, (app::WriteStateInfoBase * this_ptr, uint8_t a_byte))
    IL2CPP_REGISTER_METHOD(0x01E6EF00, void, Append_2, (app::WriteStateInfoBase * this_ptr, app::Byte__Array* bytes))
    IL2CPP_REGISTER_METHOD(0x01E6EF50, void, AppendCRLF, (app::WriteStateInfoBase * this_ptr, bool include_space))
    IL2CPP_REGISTER_METHOD(0x01E6F140, void, AppendHeader, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6F1A0, void, AppendFooter, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_MaxLineLength, (app::WriteStateInfoBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6F200, void, Reset, (app::WriteStateInfoBase * this_ptr))
} // namespace app::classes::System::Net::Mime::WriteStateInfoBase
