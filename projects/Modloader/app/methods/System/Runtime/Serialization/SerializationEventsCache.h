#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationEvents.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Serialization::SerializationEventsCache {
    IL2CPP_REGISTER_METHOD(0x01EDDB10, app::SerializationEvents*, GetSerializationEventsForType, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x01EDE030, void, cctor, ())
} // namespace app::classes::System::Runtime::Serialization::SerializationEventsCache
