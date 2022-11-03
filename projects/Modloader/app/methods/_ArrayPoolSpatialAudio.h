#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::_ArrayPoolSpatialAudio {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::_ArrayPoolSpatialAudio * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x0271BFC0, void*, getCPtr, (app::_ArrayPoolSpatialAudio * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::_ArrayPoolSpatialAudio * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x0271C050, void, Finalize, (app::_ArrayPoolSpatialAudio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271C0D0, void, Dispose, (app::_ArrayPoolSpatialAudio * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0271C2E0, int32_t, Get, ())
    IL2CPP_REGISTER_METHOD(0x0271C3F0, void, ctor_2, (app::_ArrayPoolSpatialAudio * this_ptr))
} // namespace app::classes::_ArrayPoolSpatialAudio
