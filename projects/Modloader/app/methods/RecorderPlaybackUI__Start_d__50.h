#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecorderPlaybackUI_Start_d_50.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::RecorderPlaybackUI__Start_d__50 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::RecorderPlaybackUI_Start_d_50 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::RecorderPlaybackUI_Start_d_50 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F7870, bool, MoveNext, (app::RecorderPlaybackUI_Start_d_50 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::RecorderPlaybackUI_Start_d_50 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F7C80, void, IEnumerator_Reset, (app::RecorderPlaybackUI_Start_d_50 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::RecorderPlaybackUI_Start_d_50 * this_ptr))
} // namespace app::classes::RecorderPlaybackUI__Start_d__50
