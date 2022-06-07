#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::BaseMeshEffect {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B5B0, app::Graphic *, get_graphic, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B680, void, OnEnable, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B760, void, OnDisable, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B840, void, OnDidApplyAnimationProperties, (app::BaseMeshEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2B920, void, ModifyMesh, (app::BaseMeshEffect * this_ptr, app::Mesh * mesh))
}
