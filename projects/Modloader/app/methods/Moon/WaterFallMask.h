#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/IWaterfallInteractionAgent.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/List_1_Moon_IWaterfallInteractionAgent_.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterFallMask.h>
#include <Modloader/app/structs/WaterFallMask_WaterLineGroup.h>

namespace app::classes::Moon::WaterFallMask {
    IL2CPP_REGISTER_METHOD(0x011A7910, float, get_LineWidth, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A7930, app::Vector3, get_RootPosition, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A7AC0, void, Init, app::WaterFallMask* this_ptr, app::LayerMask static_collision_mask, app::LayerMask dynamic_layer_mask)
    IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_IsSuspended, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A8100, void, set_IsSuspended, app::WaterFallMask* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x011A8110, app::SuspendableMask__Enum, get_Mask, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A8120, void, set_Mask, app::WaterFallMask* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x011A81E0, void, OnEnable, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A8450, void, OnDisable, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A8680, void, Simulate, app::WaterFallMask* this_ptr, float delta_t_ime, app::List_1_Moon_IWaterfallInteractionAgent_* agents)
    IL2CPP_REGISTER_METHOD(0x011A8790, void, PopulateRenderers, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A8980, void, PopulateInBuilds, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A8AE0, void, CheckForInterruptions, app::WaterFallMask* this_ptr, app::List_1_Moon_IWaterfallInteractionAgent_* agents)
    IL2CPP_REGISTER_METHOD(
        0x011AA040,
        bool,
        AgentIntersectRect,
        app::WaterFallMask* this_ptr,
        app::IWaterfallInteractionAgent* current_agent,
        app::WaterFallMask_WaterLineGroup* water_line,
        app::Vector2* intersection_point,
        bool* tunnel_through
    )
    IL2CPP_REGISTER_METHOD(0x011AA2F0, void, SetShaderProperties, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AA5D0, app::Vector3, GetStartPositionForLine, app::WaterFallMask* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x011AA750, void, ComputeMaskTransform, app::WaterFallMask* this_ptr, int32_t idx)
    IL2CPP_REGISTER_METHOD(
        0x011AABD0,
        app::ParticleSystem*,
        CreateStaticCollisionEffect,
        app::WaterFallMask* this_ptr,
        app::Vector2 position,
        app::Vector2 normal
    )
    IL2CPP_REGISTER_METHOD(0x011AAED0, void, OnFrustumEnter, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AB080, void, OnFrustumExit, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01173700, bool, get_InsideFrustum, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AB230, app::Bounds, get_Bounds, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AB250, void, CalculateBounds, app::WaterFallMask* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011AB580, void, ctor, app::WaterFallMask* this_ptr)
} // namespace app::classes::Moon::WaterFallMask
