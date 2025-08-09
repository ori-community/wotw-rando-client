#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/SurrogateForCyclicalReference.h>

namespace app::classes::System::Runtime::Serialization::SurrogateForCyclicalReference {
    IL2CPP_REGISTER_METHOD(
        0x01EE1DA0,
        void,
        GetObjectData,
        app::SurrogateForCyclicalReference* this_ptr,
        app::Object* obj,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(
        0x01EE1E70,
        app::Object*,
        SetObjectData,
        app::SurrogateForCyclicalReference* this_ptr,
        app::Object* obj,
        app::SerializationInfo* info,
        app::StreamingContext context,
        app::ISurrogateSelector* selector
    )
} // namespace app::classes::System::Runtime::Serialization::SurrogateForCyclicalReference
