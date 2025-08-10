#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/LoadingBootstrap.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>
#include <Modloader/app/structs/PrewarmOperationSlot__Enum.h>
#include <Modloader/app/structs/Scene.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ThreadPriority__Enum_1.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::LoadingBootstrap {
    IL2CPP_REGISTER_METHOD(0x00FB6B00, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00FB6CA0, void, Awake, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB6DA0, void, OnDisable, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB6F00, void, CheckForContentPackage, )
    IL2CPP_REGISTER_METHOD(0x00FB7030, app::PlayerLoopSystem, FilterLoopSubsytems, app::PlayerLoopSystem root, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x00FB72B0, void, SetLoadingIntegrationTimeSlice, app::ThreadPriority__Enum_1 priority, double value)
    IL2CPP_REGISTER_METHOD(0x00FB73E0, void, InitializePlayerLoop, )
    IL2CPP_REGISTER_METHOD(0x00FB7FA0, void, InitializeCommonTweaks, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB86A0, void, InitializeStandaloneTweaks, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB87C0, void, ParseNvnPoolSizes, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeXboxOneTweaks, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB89A0, void, InitializeSwitchTweaks, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB8E40, app::String*, ParseArgument, app::String* flag)
    IL2CPP_REGISTER_METHOD(0x00FB9260, bool, ToggleBoolBasedOnCommandline, app::String* cmdline_arg, bool* bool_to_toggle)
    IL2CPP_REGISTER_METHOD(0x00FB93A0, app::IEnumerator*, Start, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB94F0, void, OnIntroLogosComplete, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB9650, void, OnGameControllerInitialize, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB98C0, void, FinishPrewarmingSlot, app::LoadingBootstrap* this_ptr, app::PrewarmOperationSlot__Enum slot)
    IL2CPP_REGISTER_METHOD(0x00FBA1B0, bool, PrewarmStep, app::LoadingBootstrap* this_ptr, app::PrewarmOperationSlot__Enum slot)
    IL2CPP_REGISTER_METHOD(0x00FBA5F0, void, CreateLineMaterial, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FBA790, app::IEnumerator*, OnEndOfFrame, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FBA8E0, void, DrawPreloadDebug, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FBBF40, void, InitializePrewarmOperations, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ActiveSceneChanged, app::LoadingBootstrap* this_ptr, app::Scene arg0, app::Scene arg1)
    IL2CPP_REGISTER_METHOD(0x00FBDC40, void, ctor, app::LoadingBootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FBDC50, void, cctor, )
} // namespace app::classes::LoadingBootstrap
