#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostIndicator.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GhostIndicator {
    IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_Index, app::GhostIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_Index, app::GhostIndicator* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00E20620, bool, get_AllowIndicator, app::GhostIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E207C0, app::Vector3, get_TargetPositon, app::GhostIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RotateIndicator, app::GhostIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ScaleByDistance, app::GhostIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E208B0, void, Start, app::GhostIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E20C60, void, OnDestroy, app::GhostIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E21060, void, GhostFinished, app::GhostIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00724720, void, FadeOutFinished, app::GhostIndicator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00723FF0, void, ctor, app::GhostIndicator* this_ptr)
} // namespace app::classes::GhostIndicator
