#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RaceHandler_StartMenuRaceNextFrame_d_42.h>

namespace app::classes::RaceHandler__StartMenuRaceNextFrame_d__42 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::RaceHandler_StartMenuRaceNextFrame_d_42* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::RaceHandler_StartMenuRaceNextFrame_d_42* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9ECD0, bool, MoveNext, app::RaceHandler_StartMenuRaceNextFrame_d_42* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::RaceHandler_StartMenuRaceNextFrame_d_42* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9F380, void, IEnumerator_Reset, app::RaceHandler_StartMenuRaceNextFrame_d_42* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::RaceHandler_StartMenuRaceNextFrame_d_42* this_ptr)
} // namespace app::classes::RaceHandler__StartMenuRaceNextFrame_d__42
