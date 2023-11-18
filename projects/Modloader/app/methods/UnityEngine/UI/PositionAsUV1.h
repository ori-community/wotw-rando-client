#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PositionAsUV1.h>
#include <Modloader/app/structs/VertexHelper.h>

namespace app::classes::UnityEngine::UI::PositionAsUV1 {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PositionAsUV1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02663680, void, ModifyMesh, (app::PositionAsUV1 * this_ptr, app::VertexHelper* vh))
} // namespace app::classes::UnityEngine::UI::PositionAsUV1
