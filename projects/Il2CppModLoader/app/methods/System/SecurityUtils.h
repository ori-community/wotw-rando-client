#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::SecurityUtils {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DemandReflectionAccess, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DemandGrantSet, (app::Assembly * assembly))
    IL2CPP_REGISTER_METHOD(0x02580230, bool, HasReflectionPermission, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x025802D0, app::Object *, SecureCreateInstance_1, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x02580370, app::Object *, SecureCreateInstance_2, (app::Type * type, app::Object__Array * args, bool allow_non_public))
    IL2CPP_REGISTER_METHODINFO(0x04772438, SecurityUtils_SecureCreateInstance_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025804F0, app::Object *, SecureCreateInstance_3, (app::Type * type, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x025805A0, app::Object *, SecureConstructorInvoke_1, (app::Type * type, app::Type__Array * arg_types, app::Object__Array * args, bool allow_non_public))
    IL2CPP_REGISTER_METHOD(0x02580680, app::Object *, SecureConstructorInvoke_2, (app::Type * type, app::Type__Array * arg_types, app::Object__Array * args, bool allow_non_public, app::BindingFlags__Enum extra_flags))
    IL2CPP_REGISTER_METHODINFO(0x04784370, SecurityUtils_SecureConstructorInvoke_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02580840, bool, GenericArgumentsAreVisible, (app::MethodInfo_1 * method_1))
    IL2CPP_REGISTER_METHOD(0x025808F0, app::Object *, MethodInfoInvoke, (app::MethodInfo_1 * method_1, app::Object * target, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
