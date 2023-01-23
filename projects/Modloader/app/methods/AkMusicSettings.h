#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkMusicSettings.h>

namespace app::classes::AkMusicSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMusicSettings * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x01882960, void*, getCPtr, (app::AkMusicSettings * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMusicSettings * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x018829F0, void, Finalize, (app::AkMusicSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01882A70, void, Dispose, (app::AkMusicSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01882C80, void, set_fStreamingLookAheadRatio, (app::AkMusicSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01882DB0, float, get_fStreamingLookAheadRatio, (app::AkMusicSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01882ED0, void, ctor_2, (app::AkMusicSettings * this_ptr))
} // namespace app::classes::AkMusicSettings
