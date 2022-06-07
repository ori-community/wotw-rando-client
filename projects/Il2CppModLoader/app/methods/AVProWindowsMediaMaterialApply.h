#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AVProWindowsMediaMaterialApply {
    IL2CPP_REGISTER_METHOD(0x0312D7F0, void, CreateTexture, ())
    IL2CPP_REGISTER_METHOD(0x0312DAD0, void, OnDestroy, (app::AVProWindowsMediaMaterialApply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312DBE0, void, Start, (app::AVProWindowsMediaMaterialApply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312DD00, void, Update, (app::AVProWindowsMediaMaterialApply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312DE60, void, ApplyMapping, (app::AVProWindowsMediaMaterialApply * this_ptr, app::Texture * texture))
    IL2CPP_REGISTER_METHOD(0x0312DF70, void, OnDisable, (app::AVProWindowsMediaMaterialApply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AVProWindowsMediaMaterialApply * this_ptr))
}
