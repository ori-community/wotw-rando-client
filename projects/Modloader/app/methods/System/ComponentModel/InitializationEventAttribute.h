#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InitializationEventAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::InitializationEventAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::InitializationEventAttribute* this_ptr, app::String* event_name)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_EventName, app::InitializationEventAttribute* this_ptr)
} // namespace app::classes::System::ComponentModel::InitializationEventAttribute
