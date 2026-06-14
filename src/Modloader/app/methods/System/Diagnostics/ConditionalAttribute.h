#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConditionalAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Diagnostics::ConditionalAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::ConditionalAttribute* this_ptr, app::String* condition_string)
}
