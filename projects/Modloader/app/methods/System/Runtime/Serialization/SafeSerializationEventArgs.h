#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/SafeSerializationEventArgs.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Runtime::Serialization::SafeSerializationEventArgs {
    IL2CPP_REGISTER_METHOD(0x01EDBB50, void, ctor, app::SafeSerializationEventArgs* this_ptr, app::StreamingContext streaming_context)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IList_1_System_Object_*, get_SerializedStates, app::SafeSerializationEventArgs* this_ptr)
} // namespace app::classes::System::Runtime::Serialization::SafeSerializationEventArgs
