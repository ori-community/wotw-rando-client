#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GarbageCollector_Mode__Enum.h>

namespace app::classes::UnityEngine::Scripting::GarbageCollector {
    IL2CPP_REGISTER_METHOD(0x0297B0B0, app::GarbageCollector_Mode__Enum, get_GCMode, ())
    IL2CPP_REGISTER_METHOD(0x0297B100, void, set_GCMode, (app::GarbageCollector_Mode__Enum value))
    IL2CPP_REGISTER_METHOD(0x0297B220, void, SetMode, (app::GarbageCollector_Mode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x0297B0B0, app::GarbageCollector_Mode__Enum, GetMode, ())
} // namespace app::classes::UnityEngine::Scripting::GarbageCollector
