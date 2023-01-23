#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BaseMeshEffect.h>
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/Mesh.h>

namespace app::classes::UnityEngine::UI::BaseMeshEffect {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B5B0, app::Graphic*, get_graphic, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B680, void, OnEnable, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B760, void, OnDisable, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B840, void, OnDidApplyAnimationProperties, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B920, void, ModifyMesh, (app::BaseMeshEffect * this_ptr, app::Mesh* mesh))
} // namespace app::classes::UnityEngine::UI::BaseMeshEffect
