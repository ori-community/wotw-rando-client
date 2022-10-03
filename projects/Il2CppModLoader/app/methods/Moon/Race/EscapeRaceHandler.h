#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Race::EscapeRaceHandler {
    IL2CPP_REGISTER_METHOD(0x00C419B0, app::RaceStateMachineContext*, get_Context, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C41A60, void, Awake, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C41C20, void, OnDestroy, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C41DE0, void, OnEnterEndTrigger, (app::EscapeRaceHandler * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHODINFO(0x04765CA0, EscapeRaceHandler_OnEnterEndTrigger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C41FE0, void, OnStart, (app::EscapeRaceHandler * this_ptr, bool spectate))
    IL2CPP_REGISTER_METHOD(0x00C420F0, void, OnFinished, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C421C0, void, PlaceOriAtStart, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGhostFinished, (app::EscapeRaceHandler * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayerFinished, (app::EscapeRaceHandler * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00C423D0, void, OnRaceFinished, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C424E0, void, OnRaceFailed, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C425F0, void, SetRaceInProgressState, (app::EscapeRaceHandler * this_ptr, bool in_progress))
    IL2CPP_REGISTER_METHOD(0x00C42780, bool, IsInsideRaceArea, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C42880, void, StartMenuRace, (app::EscapeRaceHandler * this_ptr, app::Action* on_start))
    IL2CPP_REGISTER_METHOD(0x00C42970, app::IEnumerator*, StartMenuRaceNextFrame, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C42AC0, void, OnEnable, (app::EscapeRaceHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EscapeRaceHandler * this_ptr))
} // namespace app::classes::Moon::Race::EscapeRaceHandler
