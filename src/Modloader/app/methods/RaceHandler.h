#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/RaceHandler.h>
#include <Modloader/app/structs/RaceStateMachineContext.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RaceHandler {
    IL2CPP_REGISTER_METHOD(0x00E99590, app::RaceStateMachineContext*, get_Context, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E99630, void, Awake, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E99820, void, Start, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9A210, app::IEnumerator*, CreateGhostFolder, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9A350, void, OnDestroy, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9ADA0, void, OnEnable, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9ADE0, void, Update, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9B030, void, FixedUpdate, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9B6E0, void, CheckStartAreaInput, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9BB20, void, CheckEndAreaInput, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9BD30, void, ActivateRace, app::RaceHandler* this_ptr, bool in_game_activation)
    IL2CPP_REGISTER_METHOD(0x00E9C000, void, OnEnterStartArea, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9C440, void, ForceInstantFrustumUpdate, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9C4E0, void, OnExitStartArea, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9C650, void, OnEnterEndArea, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9C890, void, OnExitEndArea, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9C8F0, void, OnEnterEndTrigger, app::RaceHandler* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00E9CB30, void, OnFinished, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9CC40, void, OnStart, app::RaceHandler* this_ptr, bool spectate)
    IL2CPP_REGISTER_METHOD(0x00E9CD50, void, OnLeaderboard, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9CE10, void, OnGhostFinished, app::RaceHandler* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00E9CF60, void, OnPlayerFinished, app::RaceHandler* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRaceFinished, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRaceFailed, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9D110, void, SetRaceInProgressState, app::RaceHandler* this_ptr, bool in_progress)
    IL2CPP_REGISTER_METHOD(0x00E9D2F0, void, SpawnReward, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9D750, void, HideReward, app::RaceHandler* this_ptr, bool spawn_f_x)
    IL2CPP_REGISTER_METHOD(0x00E9D890, void, ApplyReward, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9DAC0, bool, IsInsideRaceArea, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9DBD0, void, StartMenuRace, app::RaceHandler* this_ptr, app::Action* on_start)
    IL2CPP_REGISTER_METHOD(0x00E9DCC0, app::IEnumerator*, StartMenuRaceNextFrame, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9DE10, void, PlaceOriAtStart, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9E060, void, GetStartGroundPosition, app::RaceHandler* this_ptr, app::Vector3* pos, app::Vector3 target)
    IL2CPP_REGISTER_METHOD(0x00E9E360, void, OnDevGhostBeaten, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9E460, void, ShowChallengeUi, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9E4C0, void, HideChallengeUi, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9E510, void, OnStateChanged, app::RaceHandler* this_ptr, app::StateMachine_2* state_machine)
    IL2CPP_REGISTER_METHOD(0x00E9E7C0, void, CheckNetworkStatus, app::RaceHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9EA90, void, ctor, app::RaceHandler* this_ptr)
} // namespace app::classes::RaceHandler
