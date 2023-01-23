#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::Emit::TypeBuilderInstantiation {
    IL2CPP_REGISTER_METHOD(0x02689D60, app::Type*, MakeGenericType, (app::Type * type, app::Type__Array* type_arguments))
    IL2CPP_REGISTER_METHODINFO(0x04735080, TypeBuilderInstantiation_MakeGenericType__MethodInfo)
} // namespace app::classes::System::Reflection::Emit::TypeBuilderInstantiation
