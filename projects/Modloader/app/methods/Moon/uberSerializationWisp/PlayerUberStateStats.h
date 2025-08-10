#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/PlayerUberStateStats.h>
#include <Modloader/app/structs/UberStateArchive.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateStats {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Completed, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F436E0, void, set_Completed, app::PlayerUberStateStats* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_WasKilled, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F436F0, void, set_WasKilled, app::PlayerUberStateStats* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00F43700, bool, get_CompletedWithEverything, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43710, void, set_CompletedWithEverything, app::PlayerUberStateStats* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_Health, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_Health, app::PlayerUberStateStats* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_MaxHealth, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43720, void, set_MaxHealth, app::PlayerUberStateStats* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Energy, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_Energy, app::PlayerUberStateStats* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_MaxEnergy, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43730, void, set_MaxEnergy, app::PlayerUberStateStats* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Completion, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43740, void, set_Completion, app::PlayerUberStateStats* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Hours, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43750, void, set_Hours, app::PlayerUberStateStats* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Minutes, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43760, void, set_Minutes, app::PlayerUberStateStats* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_Seconds, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43770, void, set_Seconds, app::PlayerUberStateStats* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_MinRespawnHealth, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_MinRespawnHealth, app::PlayerUberStateStats* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00F43780, void, ctor, app::PlayerUberStateStats* this_ptr, app::Action* set_dirty_callback)
    IL2CPP_REGISTER_METHOD(0x00F43960, void, Save, app::PlayerUberStateStats* this_ptr, app::UberStateArchive* archive, app::PlayerUberStateStats* abilities)
    IL2CPP_REGISTER_METHOD(0x00F43B50, void, Load, app::PlayerUberStateStats* this_ptr, app::UberStateArchive* archive, int32_t store_version)
    IL2CPP_REGISTER_METHOD(0x00F43E80, void, OnGui, app::PlayerUberStateStats* this_ptr, app::NavigableOnGUI* gui)
    IL2CPP_REGISTER_METHOD(0x00E3FFC0, int64_t, get_Size, app::PlayerUberStateStats* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F43FE0, void, RunSetDirtyCallback, app::PlayerUberStateStats* this_ptr)
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateStats
