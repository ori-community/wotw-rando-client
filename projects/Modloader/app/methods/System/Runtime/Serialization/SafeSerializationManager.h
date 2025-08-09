#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SafeSerializationManager.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Runtime::Serialization::SafeSerializationManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::SafeSerializationManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EDBCD0, void, ctor_2, app::SafeSerializationManager* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x00519290, bool, get_IsActive, app::SafeSerializationManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01EDBEC0,
        void,
        CompleteSerialization,
        app::SafeSerializationManager* this_ptr,
        app::Object* serialized_object,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x01EDC230, void, CompleteDeserialization, app::SafeSerializationManager* this_ptr, app::Object* deserialized_object)
    IL2CPP_REGISTER_METHOD(
        0x01EDC4E0,
        void,
        ISerializable_GetObjectData,
        app::SafeSerializationManager* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x01EDC5D0, app::Object*, IObjectReference_GetRealObject, app::SafeSerializationManager* this_ptr, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01EDC990, void, OnDeserialized, app::SafeSerializationManager* this_ptr, app::StreamingContext context)
} // namespace app::classes::System::Runtime::Serialization::SafeSerializationManager
