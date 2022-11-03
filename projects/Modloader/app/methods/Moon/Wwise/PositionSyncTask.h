#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Wwise::PositionSyncTask {
    IL2CPP_REGISTER_METHOD(0x00ABE2D0, app::SoundListenerReference, get_AsListener, (app::PositionSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270A8E0, void, set_AsListener, (app::PositionSyncTask * this_ptr, app::SoundListenerReference value))
    IL2CPP_REGISTER_METHOD(0x0270A8F0, void, ctor, (app::PositionSyncTask * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x0270AA80, bool, get_IsValid, (app::PositionSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270A820, bool, get_ShouldBeUpdatedThisFrame, (app::PositionSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270AA90, void, Reset, (app::PositionSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0270ABB0, void, Bind, (app::PositionSyncTask * this_ptr, app::SoundHostReference host, int32_t frame_quantinization))
} // namespace app::classes::Moon::Wwise::PositionSyncTask
