#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MetaballRenderer_TransformMetaball.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Metaballs2D::MetaballRenderer_TransformMetaball {
    IL2CPP_REGISTER_METHOD(0x015A4070, app::Vector2, get_Position, app::MetaballRenderer_TransformMetaball* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A4180, void, set_Position, app::MetaballRenderer_TransformMetaball* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Radius, app::MetaballRenderer_TransformMetaball* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_Radius, app::MetaballRenderer_TransformMetaball* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_RadiusMultipier, app::MetaballRenderer_TransformMetaball* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_RadiusMultipier, app::MetaballRenderer_TransformMetaball* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00E71230, app::Vector2, get_Speed, app::MetaballRenderer_TransformMetaball* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E71250, void, set_Speed, app::MetaballRenderer_TransformMetaball* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_Lifetime, app::MetaballRenderer_TransformMetaball* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_Lifetime, app::MetaballRenderer_TransformMetaball* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_ShouldRemove, app::MetaballRenderer_TransformMetaball* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A120, void, set_ShouldRemove, app::MetaballRenderer_TransformMetaball* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00858E20, void, ctor, app::MetaballRenderer_TransformMetaball* this_ptr)
} // namespace app::classes::Metaballs2D::MetaballRenderer_TransformMetaball
