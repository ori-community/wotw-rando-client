#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OriCellBar.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>

namespace app::classes::OriCellBar {
    IL2CPP_REGISTER_METHOD(0x00437A00, void, SetShowCondition, (app::OriCellBar * this_ptr, app::Func_1_Boolean_* should_show_now))
    IL2CPP_REGISTER_METHOD(0x00437A70, float, get_CurrentValue, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00437A80, float, get_MaxValue, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00437A90, float, get_MaxUnshieldedValue, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00437AA0, void, Awake, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00438AC0, void, OnDestroy, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004390A0, void, OnRestoreCheckpoint, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A8A8, OriCellBar_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004391C0, void, UpdateFloatProvidersCache, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00439270, void, RefreshUpdateDataOnCells, (app::OriCellBar * this_ptr, float current_value, float max_value))
    IL2CPP_REGISTER_METHOD(0x004392F0, void, OnUpdatedShard, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471C840, OriCellBar_OnUpdatedShard__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004394A0, void, ForceUpdateBar, (app::OriCellBar * this_ptr, app::PlayerUberStateShards_Shard* shard))
    IL2CPP_REGISTER_METHODINFO(0x04710ED0, OriCellBar_ForceUpdateBar__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00439510, void, UpdatedRelevantShard, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00439570, bool, get_ShouldBeShown, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00439620, void, UpdateValue, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004397D0, void, FixedUpdate, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00439C50, bool, get_FreezeTimedOut, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00439D60, void, DrainCheck, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043A7B0, void, DisableDrain1, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754050, OriCellBar_DisableDrain1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043A8E0, void, DisableDrain2, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B090, OriCellBar_DisableDrain2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043AA10, void, UpdateVisuals, (app::OriCellBar * this_ptr, bool force_update))
    IL2CPP_REGISTER_METHOD(0x0043B3F0, void, PlayShowTimeline, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043B600, void, PlayHideTimeline, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043B870, void, Show, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043B8C0, void, Hide, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043B8E0, void, ctor, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043B980, void, _PlayHideTimeline_b__76_0, (app::OriCellBar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795548, OriCellBar__PlayHideTimeline_b__76_0__MethodInfo)
} // namespace app::classes::OriCellBar
