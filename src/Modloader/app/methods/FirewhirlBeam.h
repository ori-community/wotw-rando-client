#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FirewhirlBeam.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::FirewhirlBeam {
    IL2CPP_REGISTER_METHOD(0x012620E0, bool, get_DamageAreaEnabled, app::FirewhirlBeam* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01262200, app::Rect, WorldBounds, app::FirewhirlBeam* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01262420, void, OnDrawGizmos, app::FirewhirlBeam* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012626D0, void, ctor, app::FirewhirlBeam* this_ptr)
} // namespace app::classes::FirewhirlBeam
