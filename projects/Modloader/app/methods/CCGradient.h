#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCGradient.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::CCGradient {
    IL2CPP_REGISTER_METHOD(0x0315B1B0, app::Color, get_Item, app::CCGradient* this_ptr, float p)
    IL2CPP_REGISTER_METHOD(0x0315B640, void, WriteToTexture, app::CCGradient* this_ptr, float minimum, float maximum, app::Texture2D* texture)
    IL2CPP_REGISTER_METHOD(0x0315B830, void, OnEnable, app::CCGradient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::CCGradient* this_ptr)
} // namespace app::classes::CCGradient
