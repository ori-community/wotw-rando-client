#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonDebugMessage.h>
#include <Modloader/app/structs/MoonDebugMessageType__Enum.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::MoonDebugMessage {
    IL2CPP_REGISTER_METHOD(0x031A51A0, void, ctor, app::MoonDebugMessage* this_ptr, app::MoonDebugMessageType__Enum typ, app::String* text, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x031A5240, app::String*, ToString, app::MoonDebugMessage* this_ptr)
} // namespace app::classes::Moon::MoonDebugMessage
