#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/PointLightMaskModifier.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/MeshFilter.h>

namespace app::classes::PointLightMaskModifier {
    IL2CPP_REGISTER_METHOD(0x0142FB20, app::Color, get_LightColor, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01301D30, float, get_CullingScore, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B31760, void, set_CullingScore, (app::PointLightMaskModifier * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::PointLightMaskModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x0142FC40, void, SetProperties, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::Renderer*, get_CachedRenderer, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::MeshFilter*, get_MeshFilter, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01430B10, void, Awake, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01430B20, void, OnEnable, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01430BF0, void, OnDisable, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, ICullingCategoryItem_get_IsValid, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01430CC0, void, OnBuild, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01430CE0, void, CacheComponents, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01430D90, void, ctor, (app::PointLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014317E0, void, cctor, ())
} // namespace app::classes::PointLightMaskModifier
