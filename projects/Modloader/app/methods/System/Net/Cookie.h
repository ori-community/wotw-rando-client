#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Cookie.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/CookieVariant__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::Cookie {
    IL2CPP_REGISTER_METHOD(0x01E9CEC0, void, ctor_1, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9D020, void, ctor_2, (app::Cookie * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01E9D1B0, void, ctor_3, (app::Cookie * this_ptr, app::String* name, app::String* value, app::String* path))
    IL2CPP_REGISTER_METHOD(0x01E9D1E0, void, ctor_4, (app::Cookie * this_ptr, app::String* name, app::String* value, app::String* path, app::String* domain))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Comment, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9D220, void, set_Comment, (app::Cookie * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Uri*, get_CommentUri, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_CommentUri, (app::Cookie * this_ptr, app::Uri* value))
    IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, get_HttpOnly, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CCAE0, void, set_HttpOnly, (app::Cookie * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_Discard, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC410, void, set_Discard, (app::Cookie * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Domain, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9D2D0, void, set_Domain, (app::Cookie * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01E9D390, app::String*, get__Domain, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_DomainImplicit, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_DomainImplicit, (app::Cookie * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E9D480, bool, get_Expired, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9D5A0, void, set_Expired, (app::Cookie * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DateTime, get_Expires, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Expires, (app::Cookie * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_Name, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9D650, void, set_Name, (app::Cookie * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04793BF0, Cookie_set_Name__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E9D800, bool, InternalSetName, (app::Cookie * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_Path, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9D940, void, set_Path, (app::Cookie * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01E9D9F0, app::String*, get__Path, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DC7EC0, bool, get_Plain, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9DAB0, app::Cookie*, Clone, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9DCE0, bool, IsDomainEqualToHost, (app::String * domain, app::String* host))
    IL2CPP_REGISTER_METHOD(0x01E9DD50, bool, VerifySetDefaults, (app::Cookie * this_ptr, app::CookieVariant__Enum variant, app::Uri* uri, bool is_local_domain, app::String* local_domain, bool set_default, bool is_throw))
    IL2CPP_REGISTER_METHODINFO(0x0473E2E0, Cookie_VerifySetDefaults__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E9EE90, bool, DomainCharsTest, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_Port, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9EF20, void, set_Port, (app::Cookie * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0470F250, Cookie_set_Port__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Int32__Array*, get_PortList, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9F590, app::String*, get__Port, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_Secure, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_Secure, (app::Cookie * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::DateTime, get_TimeStamp, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::String*, get_Value, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9F680, void, set_Value, (app::Cookie * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::CookieVariant__Enum, get_Variant, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Variant, (app::Cookie * this_ptr, app::CookieVariant__Enum value))
    IL2CPP_REGISTER_METHOD(0x01E9F730, app::String*, get_DomainKey, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_Version, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9F750, void, set_Version, (app::Cookie * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x047771D8, Cookie_set_Version__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E9F820, app::String*, get__Version, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E9F960, app::IComparer*, GetComparer, ())
    IL2CPP_REGISTER_METHOD(0x01E9FA00, bool, Equals, (app::Cookie * this_ptr, app::Object* comparand))
    IL2CPP_REGISTER_METHOD(0x01E9FE10, int32_t, GetHashCode, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA0200, app::String*, ToString, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA0970, app::String*, ToServerString, (app::Cookie * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA0CB0, void, cctor, ())
} // namespace app::classes::System::Net::Cookie
