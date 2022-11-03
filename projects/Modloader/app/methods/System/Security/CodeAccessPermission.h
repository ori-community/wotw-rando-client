#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::CodeAccessPermission {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CodeAccessPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C7680, void, Demand, (app::CodeAccessPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C76F0, bool, Equals, (app::CodeAccessPermission * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::CodeAccessPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C7850, app::String*, ToString, (app::CodeAccessPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C7890, app::IPermission*, Union, (app::CodeAccessPermission * this_ptr, app::IPermission* other))
    IL2CPP_REGISTER_METHODINFO(0x04782D50, CodeAccessPermission_Union__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C7930, app::SecurityElement*, Element, (app::CodeAccessPermission * this_ptr, int32_t version))
    IL2CPP_REGISTER_METHOD(0x020C7B80, app::PermissionState__Enum, CheckPermissionState, (app::PermissionState__Enum state, bool allow_unrestricted))
    IL2CPP_REGISTER_METHODINFO(0x047738D0, CodeAccessPermission_CheckPermissionState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C7C70, int32_t, CheckSecurityElement, (app::SecurityElement * se, app::String* parameter_name, int32_t minimum_version, int32_t maximum_version))
    IL2CPP_REGISTER_METHODINFO(0x04758728, CodeAccessPermission_CheckSecurityElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C7F50, bool, IsUnrestricted, (app::SecurityElement * se))
    IL2CPP_REGISTER_METHOD(0x020C8080, void, ThrowInvalidPermission, (app::IPermission * target, app::Type* expected))
    IL2CPP_REGISTER_METHODINFO(0x0471CC60, CodeAccessPermission_ThrowInvalidPermission__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IPermission_Demand, (app::CodeAccessPermission * this_ptr))
} // namespace app::classes::System::Security::CodeAccessPermission
