#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::ReflectionProbe {
    IL2CPP_REGISTER_METHOD(0x02970840, void, CallReflectionProbeEvent, (app::ReflectionProbe * probe, app::ReflectionProbe_ReflectionProbeEvent__Enum probe_event))
    IL2CPP_REGISTER_METHOD(0x029708F0, void, CallSetDefaultReflection, (app::Cubemap * default_reflection_cubemap))
}
