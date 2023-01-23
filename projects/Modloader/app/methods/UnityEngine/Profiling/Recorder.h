#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Recorder.h>

namespace app::classes::UnityEngine::Profiling::Recorder {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::Recorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::Recorder * this_ptr, void* ptr))
    IL2CPP_REGISTER_METHOD(0x029697E0, void, Finalize, (app::Recorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02969920, bool, get_isValid, (app::Recorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029699A0, void, DisposeNative, (void* ptr))
    IL2CPP_REGISTER_METHOD(0x029699F0, int64_t, get_elapsedNanoseconds, (app::Recorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02969A60, int64_t, GetElapsedNanoseconds, (app::Recorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02969AB0, int32_t, get_sampleBlockCount, (app::Recorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02969B20, int32_t, GetSampleBlockCount, (app::Recorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02969B70, void, cctor, ())
} // namespace app::classes::UnityEngine::Profiling::Recorder
