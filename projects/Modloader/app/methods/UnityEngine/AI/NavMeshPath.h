#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::AI::NavMeshPath {
    IL2CPP_REGISTER_METHOD(0x031B3680, void, ctor, (app::NavMeshPath * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B36D0, void, DestroyNavMeshPath, (app::NavMeshPath * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B3720, void, Finalize, (app::NavMeshPath * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B3830, void, ClearCornersInternal, (app::NavMeshPath * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B3880, void, ClearCorners, (app::NavMeshPath * this_ptr))
} // namespace app::classes::UnityEngine::AI::NavMeshPath
