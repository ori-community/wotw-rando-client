#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::IntrospectionExtensions {
    IL2CPP_REGISTER_METHOD(0x0268AC00, app::TypeInfo*, GetTypeInfo, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x047652F8, IntrospectionExtensions_GetTypeInfo__MethodInfo)
} // namespace app::classes::System::Reflection::IntrospectionExtensions
