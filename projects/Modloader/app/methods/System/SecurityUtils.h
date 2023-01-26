#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::SecurityUtils {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DemandReflectionAccess, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DemandGrantSet, (app::Assembly * assembly))
    IL2CPP_REGISTER_METHOD(0x02580230, bool, HasReflectionPermission, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x025802D0, app::Object*, SecureCreateInstance_1, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x02580370, app::Object*, SecureCreateInstance_2, (app::Type * type, app::Object__Array* args, bool allow_non_public))
    IL2CPP_REGISTER_METHOD(0x025804F0, app::Object*, SecureCreateInstance_3, (app::Type * type, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x025805A0, app::Object*, SecureConstructorInvoke_1, (app::Type * type, app::Type__Array* arg_types, app::Object__Array* args, bool allow_non_public))
    IL2CPP_REGISTER_METHOD(0x02580680, app::Object*, SecureConstructorInvoke_2, (app::Type * type, app::Type__Array* arg_types, app::Object__Array* args, bool allow_non_public, app::BindingFlags__Enum extra_flags))
    IL2CPP_REGISTER_METHOD(0x02580840, bool, GenericArgumentsAreVisible, (app::MethodInfo_1 * method_1))
    IL2CPP_REGISTER_METHOD(0x025808F0, app::Object*, MethodInfoInvoke, (app::MethodInfo_1 * method_1, app::Object* target, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::System::SecurityUtils
