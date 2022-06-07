#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Metaballs2D::MetaballRenderer {
    IL2CPP_REGISTER_METHOD(0x01056D80, app::Vector2, get_CellSize, (app::MetaballRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015A1590, void, Awake, (app::MetaballRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015A15B0, void, Update, (app::MetaballRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015A2780, void, Init, (app::MetaballRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015A2CE0, void, AddMetaBall, (app::MetaballRenderer * this_ptr, app::Vector2 position, float radius))
    IL2CPP_REGISTER_METHOD(0x015A2E80, float, GetZValueAt, (app::MetaballRenderer * this_ptr, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x015A3220, void, SampleFunction, (app::MetaballRenderer * this_ptr, app::MetaballRenderer_GridSample * grid))
    IL2CPP_REGISTER_METHOD(0x015A36B0, int32_t, IndexFunction, (app::MetaballRenderer * this_ptr, float b0, float b1, float b2, float b3))
    IL2CPP_REGISTER_METHOD(0x015A36F0, app::Vector3, SmoothFunction, (app::MetaballRenderer * this_ptr, app::Vector3 p, float s_a, float s_b, float s_c, float s_d))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UdpateMetaBall, (app::MetaballRenderer * this_ptr, app::MetaballRenderer_IMetaball * current_ball))
    IL2CPP_REGISTER_METHOD(0x015A3930, void, HandleHorizontalBorderCollision, (app::MetaballRenderer * this_ptr, app::MetaballRenderer_IMetaball * m_ball))
    IL2CPP_REGISTER_METHOD(0x015A3A30, void, HandleVerticalBorderCollision, (app::MetaballRenderer * this_ptr, app::MetaballRenderer_IMetaball * m_ball))
    IL2CPP_REGISTER_METHOD(0x015A3B20, void, ApplySpeed, (app::MetaballRenderer * this_ptr, app::MetaballRenderer_IMetaball * ball))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeUdpate, (app::MetaballRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterUdpate, (app::MetaballRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015A3C80, void, OnDrawGizmos, (app::MetaballRenderer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015A3E20, void, ctor, (app::MetaballRenderer * this_ptr))
}
