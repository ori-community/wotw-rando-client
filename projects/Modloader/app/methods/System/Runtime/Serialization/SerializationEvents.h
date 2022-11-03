#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::SerializationEvents {
    IL2CPP_REGISTER_METHOD(0x01EDCB70, app::List_1_System_Reflection_MethodInfo_*, GetMethodsWithAttribute, (app::SerializationEvents * this_ptr, app::Type* attribute, app::Type* t))
    IL2CPP_REGISTER_METHOD(0x01EDCE50, void, ctor, (app::SerializationEvents * this_ptr, app::Type* t))
    IL2CPP_REGISTER_METHOD(0x01EDCF90, bool, get_HasOnSerializingEvents, (app::SerializationEvents * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EDCFB0, void, InvokeOnSerializing, (app::SerializationEvents * this_ptr, app::Object* obj, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01EDD210, void, InvokeOnDeserializing, (app::SerializationEvents * this_ptr, app::Object* obj, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01EDD470, void, InvokeOnDeserialized, (app::SerializationEvents * this_ptr, app::Object* obj, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01EDD6D0, app::SerializationEventHandler*, AddOnSerialized, (app::SerializationEvents * this_ptr, app::Object* obj, app::SerializationEventHandler* handler))
    IL2CPP_REGISTER_METHOD(0x01EDD8F0, app::SerializationEventHandler*, AddOnDeserialized, (app::SerializationEvents * this_ptr, app::Object* obj, app::SerializationEventHandler* handler))
} // namespace app::classes::System::Runtime::Serialization::SerializationEvents
