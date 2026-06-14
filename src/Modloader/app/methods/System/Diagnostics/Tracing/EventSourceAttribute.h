#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventSourceAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Diagnostics::Tracing::EventSourceAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, app::EventSourceAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, app::EventSourceAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Guid, app::EventSourceAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Guid, app::EventSourceAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_LocalizationResources, app::EventSourceAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EventSourceAttribute* this_ptr)
} // namespace app::classes::System::Diagnostics::Tracing::EventSourceAttribute
