#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BossRaceHandler_StartMenuRaceNextFrame_d_20.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::BossRaceHandler__StartMenuRaceNextFrame_d__20 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::BossRaceHandler_StartMenuRaceNextFrame_d_20* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::BossRaceHandler_StartMenuRaceNextFrame_d_20* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D3F360, bool, MoveNext, app::BossRaceHandler_StartMenuRaceNextFrame_d_20* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::BossRaceHandler_StartMenuRaceNextFrame_d_20* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D3F8C0, void, IEnumerator_Reset, app::BossRaceHandler_StartMenuRaceNextFrame_d_20* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::BossRaceHandler_StartMenuRaceNextFrame_d_20* this_ptr)
} // namespace app::classes::BossRaceHandler__StartMenuRaceNextFrame_d__20
