#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationObjectManager.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Runtime::Serialization::SerializationObjectManager {
    IL2CPP_REGISTER_METHOD(0x01EE1730, void, ctor, (app::SerializationObjectManager * this_ptr, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01EE1960, void, RegisterObject, (app::SerializationObjectManager * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01EE1BA0, void, RaiseOnSerializedEvent, (app::SerializationObjectManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EE1BD0, void, AddOnSerialized, (app::SerializationObjectManager * this_ptr, app::Object* obj))
} // namespace app::classes::System::Runtime::Serialization::SerializationObjectManager
