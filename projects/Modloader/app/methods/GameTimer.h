#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameTimer.h>
#include <Modloader/app/structs/UberStateValueStore.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::GameTimer {
    IL2CPP_REGISTER_METHOD(0x00404DA0, void, Awake, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004050A0, void, OnEnable, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004050D0, void, UpdateValueStoreOnDeath, (app::GameTimer * this_ptr, app::UberStateValueStore* value_store))
    IL2CPP_REGISTER_METHOD(0x00405220, void, OnCheckpointPreRestore, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708968, GameTimer_OnCheckpointPreRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00405240, void, OnCheckpointPostRestore, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047323B0, GameTimer_OnCheckpointPostRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00405260, void, OnDestroy, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405550, void, Update, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405810, app::String*, get_DisplayTimeAsString, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405A00, int32_t, get_Hours, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405AB0, app::String*, get_HoursAsString, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405BA0, int32_t, get_Minutes, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405BE0, app::String*, get_MinutesAsString, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405CE0, int32_t, get_TotalMinutes, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405DA0, int32_t, get_Seconds, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405E60, void, Reset, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::GameTimer * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00405E70, void, ResetSession, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405E80, void, Apply, (app::GameTimer * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_ApplyOnEditor, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IUberState__Array*, get_AffectingUberStates, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405F60, void, OnBeforeSave, (app::GameTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00406040, void, ctor, (app::GameTimer * this_ptr))
} // namespace app::classes::GameTimer
