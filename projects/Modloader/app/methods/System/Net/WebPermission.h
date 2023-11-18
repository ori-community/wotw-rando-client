#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DelayedRegex.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IPermission.h>
#include <Modloader/app/structs/NetworkAccess__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PermissionState__Enum.h>
#include <Modloader/app/structs/SecurityElement.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebPermission.h>

namespace app::classes::System::Net::WebPermission {
    IL2CPP_REGISTER_METHOD(0x01D77B80, app::Regex*, get_MatchAllRegex, ())
    IL2CPP_REGISTER_METHOD(0x01D77D10, app::IEnumerator*, get_ConnectList, (app::WebPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D78130, app::IEnumerator*, get_AcceptList, (app::WebPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D78550, void, ctor_1, (app::WebPermission * this_ptr, app::PermissionState__Enum state))
    IL2CPP_REGISTER_METHOD(0x01D78770, void, ctor_2, (app::WebPermission * this_ptr, bool unrestricted))
    IL2CPP_REGISTER_METHOD(0x01D78990, void, ctor_3, (app::WebPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D78BA0, void, ctor_4, (app::WebPermission * this_ptr, app::NetworkAccess__Enum access))
    IL2CPP_REGISTER_METHOD(0x01D78DD0, void, ctor_5, (app::WebPermission * this_ptr, app::NetworkAccess__Enum access, app::Regex* uri_regex))
    IL2CPP_REGISTER_METHOD(0x01D79010, void, ctor_6, (app::WebPermission * this_ptr, app::NetworkAccess__Enum access, app::String* uri_string))
    IL2CPP_REGISTER_METHOD(0x01D79250, void, ctor_7, (app::WebPermission * this_ptr, app::NetworkAccess__Enum access, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x01D79490, void, AddPermission_1, (app::WebPermission * this_ptr, app::NetworkAccess__Enum access, app::String* uri_string))
    IL2CPP_REGISTER_METHOD(0x01D79A80, void, AddPermission_2, (app::WebPermission * this_ptr, app::NetworkAccess__Enum access, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x01D79F60, void, AddPermission_3, (app::WebPermission * this_ptr, app::NetworkAccess__Enum access, app::Regex* uri_regex))
    IL2CPP_REGISTER_METHOD(0x01D7A210, void, AddAsPattern, (app::WebPermission * this_ptr, app::NetworkAccess__Enum access, app::DelayedRegex* uri_regex_pattern))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, IsUnrestricted, (app::WebPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D7A7F0, app::IPermission*, Copy, (app::WebPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D7AB40, bool, IsSubsetOf, (app::WebPermission * this_ptr, app::IPermission* target))
    IL2CPP_REGISTER_METHOD(0x01D7B160, bool, isSpecialSubsetCase, (app::String * regex_to_check, app::ArrayList* perm_list))
    IL2CPP_REGISTER_METHOD(0x01D7B730, app::IPermission*, Union, (app::WebPermission * this_ptr, app::IPermission* target))
    IL2CPP_REGISTER_METHOD(0x01D7BE00, app::IPermission*, Intersect, (app::WebPermission * this_ptr, app::IPermission* target))
    IL2CPP_REGISTER_METHOD(0x01D7C190, void, FromXml, (app::WebPermission * this_ptr, app::SecurityElement* security_element))
    IL2CPP_REGISTER_METHOD(0x01D7CE60, app::SecurityElement*, ToXml, (app::WebPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D7DC80, bool, isMatchedURI, (app::Object * uri_to_check, app::ArrayList* uri_pattern_list))
    IL2CPP_REGISTER_METHOD(0x01D7E1C0, void, intersectList, (app::ArrayList * A, app::ArrayList* B, app::ArrayList* result))
    IL2CPP_REGISTER_METHOD(0x01D7EEA0, app::Object*, intersectPair, (app::Object * L, app::Object* R, bool* is_uri))
} // namespace app::classes::System::Net::WebPermission
