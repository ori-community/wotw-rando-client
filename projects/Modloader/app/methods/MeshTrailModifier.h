#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MeshTrailModifier.h>
#include <Modloader/app/structs/MoonRenderContext.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::MeshTrailModifier {
    IL2CPP_REGISTER_METHOD(0x0158C530, void, DrawDebugInfo, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsProcedural, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0158CAE0, void, UberShaderEditorUpdate, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0158CB20, void, OnDrawGizmos, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0158CEB0, void, SanityCheck, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0158D1A0, void, Simulate, (app::MeshTrailModifier * this_ptr, app::MoonRenderContext* ctx, app::Vector3 camera_position, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0158D270, void, DebugRender, (app::MeshTrailModifier * this_ptr, app::MoonRenderContext* ctx))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, ICullingCategoryItem_get_IsValid, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0158D2A0, void, OnEnable, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0158D3B0, void, OnDisable, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0158D4A0, void, SimulateAll, (app::MoonRenderContext * ctx, app::Vector3 camera_position))
    IL2CPP_REGISTER_METHOD(0x0158D730, void, DebugRenderAll, (app::MoonRenderContext * ctx))
    IL2CPP_REGISTER_METHOD(0x002FD750, app::SuspendableMask__Enum, get_Mask, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_Mask, (app::MeshTrailModifier * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0158D8E0, bool, get_IsSuspended, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0158D900, void, set_IsSuspended, (app::MeshTrailModifier * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::MeshTrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0158D920, void, cctor, ())
} // namespace app::classes::MeshTrailModifier
