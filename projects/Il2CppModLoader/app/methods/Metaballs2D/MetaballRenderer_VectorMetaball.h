#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Metaballs2D::MetaballRenderer_VectorMetaball {
    IL2CPP_REGISTER_METHOD(0x00F28550, app::Vector2, get_Position, (app::MetaballRenderer_VectorMetaball * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111CA50, void, set_Position, (app::MetaballRenderer_VectorMetaball * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Radius, (app::MetaballRenderer_VectorMetaball * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_Radius, (app::MetaballRenderer_VectorMetaball * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_RadiusMultipier, (app::MetaballRenderer_VectorMetaball * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_RadiusMultipier, (app::MetaballRenderer_VectorMetaball * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00E71230, app::Vector2, get_Speed, (app::MetaballRenderer_VectorMetaball * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E71250, void, set_Speed, (app::MetaballRenderer_VectorMetaball * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_Lifetime, (app::MetaballRenderer_VectorMetaball * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_Lifetime, (app::MetaballRenderer_VectorMetaball * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_ShouldRemove, (app::MetaballRenderer_VectorMetaball * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A120, void, set_ShouldRemove, (app::MetaballRenderer_VectorMetaball * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MetaballRenderer_VectorMetaball * this_ptr))
}
