#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GhostService {
    IL2CPP_REGISTER_METHOD(0x007E85E0, int32_t, get_TotalGhosts, (app::GhostService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E8670, bool, get_HasGhosts, (app::GhostService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E8700, void, ClearGhosts, (app::GhostService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E88D0, app::GhostPlayer*, get_TopScoreGhost, (app::GhostService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E8AC0, app::Vector3, GetGhostPosition, (app::GhostService * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x007E8CB0, app::GhostPlayer*, GetGhost, (app::GhostService * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_GhostPlayer_*, GetGhosts, (app::GhostService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E8D80, bool, HasGhost, (app::GhostService * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x007E8E70, void, PopulateGhosts, (app::GhostService * this_ptr, app::GhostPlayer__Array* ghosts))
    IL2CPP_REGISTER_METHOD(0x007E9080, void, RunGhosts, (app::GhostService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E9170, bool, get_AllGhostsFinished, (app::GhostService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E92B0, void, ctor, (app::GhostService * this_ptr))
} // namespace app::classes::GhostService
