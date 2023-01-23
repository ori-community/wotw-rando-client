#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReflectionProbe.h>
#include <Modloader/app/structs/ReflectionProbe_ReflectionProbeEvent__Enum.h>
#include <Modloader/app/structs/Cubemap.h>

namespace app::classes::UnityEngine::ReflectionProbe {
    IL2CPP_REGISTER_METHOD(0x02970840, void, CallReflectionProbeEvent, (app::ReflectionProbe * probe, app::ReflectionProbe_ReflectionProbeEvent__Enum probe_event))
    IL2CPP_REGISTER_METHOD(0x029708F0, void, CallSetDefaultReflection, (app::Cubemap * default_reflection_cubemap))
} // namespace app::classes::UnityEngine::ReflectionProbe
