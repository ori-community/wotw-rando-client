#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SkipCutscene {
    IL2CPP_REGISTER_METHOD(0x006C0B30, app::List_1_ICondition_*, get_ResolvedConditions, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C0D60, app::List_1_ISkipCutsceneAction_*, get_ResolvedReactions, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C0F90, app::Vector3, get_DesiredPositionAfterSkip, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C1260, bool, get_ShouldHandleSceneLoadingUnloading, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C13C0, app::MoonTimeline*, get_ResolvedTimeline, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_ValidForCutsceneSkiping, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_ValidForCutsceneSkiping, (app::SkipCutscene * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_SkipCutscenePriority, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C14E0, void, OnValidate, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C14F0, void, OnEnable, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C1600, void, OnDisable, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C1780, void, LateUpdate, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C1920, void, CollectCustomTriggers, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C1B80, void, OnSkip, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C2C20, void, OnAfterTandemSpawn, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471B4E8, SkipCutscene_OnAfterTandemSpawn__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldCreateCheckpoint, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C2ED0, bool, ConditionsPassed, (app::SkipCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SkipCutscene * this_ptr))
} // namespace app::classes::SkipCutscene
