#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::SerializationEventsCache {
    IL2CPP_REGISTER_METHOD(0x01EDDB10, app::SerializationEvents*, GetSerializationEventsForType, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x01EDE030, void, cctor, ())
} // namespace app::classes::System::Runtime::Serialization::SerializationEventsCache
