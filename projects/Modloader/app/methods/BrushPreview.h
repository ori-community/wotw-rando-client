#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrushPreview.h>

namespace app::classes::BrushPreview {
    IL2CPP_REGISTER_METHOD(0x00D515A0, void, OnDrawGizmos, app::BrushPreview* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D515C0, void, DrawCircle, app::BrushPreview* this_ptr, float radius_scale)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::BrushPreview* this_ptr)
} // namespace app::classes::BrushPreview
