#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TypeInfo.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::IntrospectionExtensions {
    IL2CPP_REGISTER_METHOD(0x0268AC00, app::TypeInfo*, GetTypeInfo, (app::Type * type))
}
