#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Mail::MailAddress {
    IL2CPP_REGISTER_METHOD(0x01E6E080, void, ctor_1, (app::MailAddress * this_ptr, app::String* address))
    IL2CPP_REGISTER_METHOD(0x01E6E180, void, ctor_2, (app::MailAddress * this_ptr, app::String* address, app::String* display_name))
    IL2CPP_REGISTER_METHOD(0x01E6E2B0, void, ctor_3, (app::MailAddress * this_ptr, app::String* address, app::String* display_name, app::Encoding* display_name_encoding))
    IL2CPP_REGISTER_METHODINFO(0x047584A0, MailAddress__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E6E3D0, void, ParseAddress, (app::MailAddress * this_ptr, app::String* address))
    IL2CPP_REGISTER_METHODINFO(0x04783578, MailAddress_ParseAddress__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Address, (app::MailAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6E7E0, app::String*, get_DisplayName, (app::MailAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6E870, bool, Equals, (app::MailAddress * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01D25F50, int32_t, GetHashCode, (app::MailAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6EA20, app::String*, ToString, (app::MailAddress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E6EBA0, app::FormatException*, CreateFormatException, ())
} // namespace app::classes::System::Net::Mail::MailAddress
