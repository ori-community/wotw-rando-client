#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderRuntimeUpdate.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberShaderRuntimeAnchoredTexture.h>
#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/UberShaderBlock.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::UberShaderRuntimeUpdate {
    IL2CPP_REGISTER_METHOD(0x01285650, app::UberShaderRuntimeUpdate*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::UberShaderRuntimeUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, (app::UberShaderRuntimeUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, (app::UberShaderRuntimeUpdate * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00998570, app::SuspendableMask__Enum, get_Mask, (app::UberShaderRuntimeUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01285850, void, set_Mask, (app::UberShaderRuntimeUpdate * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01285900, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01285980, void, OnEnable, (app::UberShaderRuntimeUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01285A40, void, OnDisable, (app::UberShaderRuntimeUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01285B00, void, OnUpdate, (app::UberShaderRuntimeUpdate * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x01285DC0, void, RegisterRuntimeWorldProjectionAnchoredTexture, (app::UberShaderRuntimeUpdate * this_ptr, app::UberShaderRuntimeAnchoredTexture* uber_shader_runtime_achored_texture))
    IL2CPP_REGISTER_METHOD(0x01285E60, void, UnregisterRuntimeWorldProjectionAnchoredTexture, (app::UberShaderRuntimeUpdate * this_ptr, app::UberShaderRuntimeAnchoredTexture* uber_shader_runtime_achored_texture))
    IL2CPP_REGISTER_METHOD(0x01285F00, void, UpdateWorldProjectionToAnchorEditor, (app::UberShaderTexture * shader_texture, app::UberShaderBlock* block))
    IL2CPP_REGISTER_METHOD(0x01286070, void, ZProjectionSnapEditor, (app::UberShaderTexture * shader_texture, app::UberShaderBlock* block))
    IL2CPP_REGISTER_METHOD(0x012864E0, void, YProjectionSnapEditor, (app::UberShaderTexture * shader_texture, app::UberShaderBlock* block))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::UberShaderRuntimeUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012869C0, void, UpdateWorldProjectionToAnchor, (app::UberShaderRuntimeAnchoredTexture * anchored_texture))
    IL2CPP_REGISTER_METHOD(0x01286A90, void, ZProjectionSnap, (app::UberShaderRuntimeAnchoredTexture * anchored_texture))
    IL2CPP_REGISTER_METHOD(0x01286EB0, void, YProjectionSnap, (app::UberShaderRuntimeAnchoredTexture * anchored_texture))
    IL2CPP_REGISTER_METHOD(0x01287370, app::Vector2, RotateVector, (app::Vector2 vec, float rotation))
    IL2CPP_REGISTER_METHOD(0x01287470, app::Vector2, RotateVectorAroundPoint, (app::Vector2 point_to_rotate, app::Vector2 center_point, float angle_in_degrees))
    IL2CPP_REGISTER_METHOD(0x01287580, float, LookRotationZ, (app::Transform * from, app::Transform* to))
    IL2CPP_REGISTER_METHOD(0x01287750, float, LookRotationY, (app::Transform * from, app::Transform* to))
    IL2CPP_REGISTER_METHOD(0x01287920, void, ctor, (app::UberShaderRuntimeUpdate * this_ptr))
} // namespace app::classes::UberShaderRuntimeUpdate
