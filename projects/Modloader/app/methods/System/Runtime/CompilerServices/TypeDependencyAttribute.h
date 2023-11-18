#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TypeDependencyAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::CompilerServices::TypeDependencyAttribute {
    IL2CPP_REGISTER_METHOD(0x01A930A0, void, ctor, (app::TypeDependencyAttribute * this_ptr, app::String* type_name))
}
