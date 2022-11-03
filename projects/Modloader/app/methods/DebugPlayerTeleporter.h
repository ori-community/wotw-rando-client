#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DebugPlayerTeleporter {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_NoClipParamsEnabled, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DF9FD0, void, set_NoClipParamsEnabled, (app::DebugPlayerTeleporter * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00DFA0B0, void, SuspendGameplay, ())
    IL2CPP_REGISTER_METHOD(0x00DFA1F0, bool, get_DashOrGrenadeEnabled, ())
    IL2CPP_REGISTER_METHOD(0x00C03C70, app::DebugPlayerTeleporter_DebugMarkerMode__Enum, get_Mode, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFA410, void, set_Mode, (app::DebugPlayerTeleporter * this_ptr, app::DebugPlayerTeleporter_DebugMarkerMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x00DFA440, void, ResumeGameplay, ())
    IL2CPP_REGISTER_METHOD(0x00DFA570, void, PlayerTeleportUpdate, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFB680, void, SelectClosestAgent, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFBB80, void, DeselectEntities, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFBD10, void, UpdateTargets, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFC020, void, LocomotionRequestUpdate, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFD2A0, void, DecreaseNavigationAgentSpeed, (app::DebugPlayerTeleporter * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00DFD3A0, void, IncreaseNavigationAgentSpeed, (app::DebugPlayerTeleporter * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00DFD470, void, SwitchNavigationAgentMode, (app::DebugPlayerTeleporter * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00DFD480, void, OnGUI, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFD970, void, FixedUpdate, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFDA50, void, ctor, (app::DebugPlayerTeleporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFDBB0, void, cctor, ())
} // namespace app::classes::DebugPlayerTeleporter
