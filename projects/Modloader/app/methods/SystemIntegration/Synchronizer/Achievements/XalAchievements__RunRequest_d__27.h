#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XalAchievements_RunRequest_d_27.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::XalAchievements__RunRequest_d__27 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::XalAchievements_RunRequest_d_27 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::XalAchievements_RunRequest_d_27 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00532EB0, bool, MoveNext, (app::XalAchievements_RunRequest_d_27 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::XalAchievements_RunRequest_d_27 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00532F70, void, IEnumerator_Reset, (app::XalAchievements_RunRequest_d_27 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::XalAchievements_RunRequest_d_27 * this_ptr))
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::XalAchievements__RunRequest_d__27
