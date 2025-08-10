#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultParameterValueAttribute.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::InteropServices::DefaultParameterValueAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::DefaultParameterValueAttribute* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Value, app::DefaultParameterValueAttribute* this_ptr)
} // namespace app::classes::System::Runtime::InteropServices::DefaultParameterValueAttribute
