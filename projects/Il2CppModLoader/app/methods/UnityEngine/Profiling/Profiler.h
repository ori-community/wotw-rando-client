#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Profiling::Profiler {
    IL2CPP_REGISTER_METHOD(0x02969510, void, set_logFile, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x02969560, void, set_enableBinaryLog, (bool value))
    IL2CPP_REGISTER_METHOD(0x029695B0, bool, get_enabled, ())
    IL2CPP_REGISTER_METHOD(0x02969600, void, set_enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x02969650, int64_t, get_usedHeapSizeLong, ())
    IL2CPP_REGISTER_METHOD(0x029696A0, int32_t, GetRuntimeMemorySize, (app::Object_1 * o))
    IL2CPP_REGISTER_METHOD(0x029696A0, int64_t, GetRuntimeMemorySizeLong, (app::Object_1 * o))
    IL2CPP_REGISTER_METHOD(0x029696F0, int64_t, GetMonoHeapSizeLong, ())
    IL2CPP_REGISTER_METHOD(0x02969740, int64_t, GetMonoUsedSizeLong, ())
    IL2CPP_REGISTER_METHOD(0x02969790, bool, SetTempAllocatorRequestedSize, (uint32_t size))
} // namespace app::classes::UnityEngine::Profiling::Profiler
