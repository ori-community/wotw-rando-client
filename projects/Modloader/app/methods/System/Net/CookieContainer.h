#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CookieContainer.h>
#include <Modloader/app/structs/Cookie.h>
#include <Modloader/app/structs/CookieCollection.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/PathList.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::System::Net::CookieContainer {
    IL2CPP_REGISTER_METHOD(0x01EA24B0, void, ctor_1, (app::CookieContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA2680, void, ctor_2, (app::CookieContainer * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x01EA2760, void, ctor_3, (app::CookieContainer * this_ptr, int32_t capacity, int32_t per_domain_capacity, int32_t max_cookie_size))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Capacity, (app::CookieContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA2A00, void, set_Capacity, (app::CookieContainer * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Count, (app::CookieContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_MaxCookieSize, (app::CookieContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA2BC0, void, set_MaxCookieSize, (app::CookieContainer * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_PerDomainCapacity, (app::CookieContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA2C80, void, set_PerDomainCapacity, (app::CookieContainer * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01EA2D60, void, Add_1, (app::CookieContainer * this_ptr, app::Cookie* cookie))
    IL2CPP_REGISTER_METHOD(0x01EA3280, void, AddRemoveDomain, (app::CookieContainer * this_ptr, app::String* key, app::PathList* value))
    IL2CPP_REGISTER_METHOD(0x01EA33E0, void, Add_2, (app::CookieContainer * this_ptr, app::Cookie* cookie, bool throw_on_error))
    IL2CPP_REGISTER_METHOD(0x01EA3D20, bool, AgeCookies, (app::CookieContainer * this_ptr, app::String* domain))
    IL2CPP_REGISTER_METHOD(0x01EA4C40, int32_t, ExpireCollection, (app::CookieContainer * this_ptr, app::CookieCollection* cc))
    IL2CPP_REGISTER_METHOD(0x01EA4DD0, void, Add_3, (app::CookieContainer * this_ptr, app::CookieCollection* cookies))
    IL2CPP_REGISTER_METHOD(0x01EA5000, bool, IsLocalDomain, (app::CookieContainer * this_ptr, app::String* host))
    IL2CPP_REGISTER_METHOD(0x01EA5420, void, Add_4, (app::CookieContainer * this_ptr, app::Uri* uri, app::Cookie* cookie))
    IL2CPP_REGISTER_METHOD(0x01EA55C0, void, Add_5, (app::CookieContainer * this_ptr, app::Uri* uri, app::CookieCollection* cookies))
    IL2CPP_REGISTER_METHOD(0x01EA58E0, app::CookieCollection*, CookieCutter, (app::CookieContainer * this_ptr, app::Uri* uri, app::String* header_name, app::String* set_cookie_header, bool is_throw))
    IL2CPP_REGISTER_METHOD(0x01EA6240, app::CookieCollection*, GetCookies, (app::CookieContainer * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x01EA6320, app::CookieCollection*, InternalGetCookies, (app::CookieContainer * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x01EA68D0, void, BuildCookieCollectionFromDomainMatches, (app::CookieContainer * this_ptr, app::Uri* uri, bool is_secure, int32_t port, app::CookieCollection* cookies, app::List_1_System_String_* domain_attribute, bool match_only_plain_cookie))
    IL2CPP_REGISTER_METHOD(0x01EA6FB0, void, MergeUpdateCollections, (app::CookieContainer * this_ptr, app::CookieCollection* destination, app::CookieCollection* source, int32_t port, bool is_secure, bool is_plain_only))
    IL2CPP_REGISTER_METHOD(0x01EA71F0, app::String*, GetCookieHeader_1, (app::CookieContainer * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x01EA72E0, app::String*, GetCookieHeader_2, (app::CookieContainer * this_ptr, app::Uri* uri, app::String** opt_cookie2))
    IL2CPP_REGISTER_METHOD(0x01EA75F0, void, SetCookies, (app::CookieContainer * this_ptr, app::Uri* uri, app::String* cookie_header))
    IL2CPP_REGISTER_METHOD(0x01EA7730, void, cctor, ())
} // namespace app::classes::System::Net::CookieContainer
