#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AVProWindowsMediaMeshApply.h>
#include <Modloader/app/structs/Texture.h>

namespace app::classes::AVProWindowsMediaMeshApply {
    IL2CPP_REGISTER_METHOD(0x0312DF80, void, Start, (app::AVProWindowsMediaMeshApply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312E0E0, void, Update, (app::AVProWindowsMediaMeshApply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312E240, void, ApplyMapping, (app::AVProWindowsMediaMeshApply * this_ptr, app::Texture* texture))
    IL2CPP_REGISTER_METHOD(0x0312E3A0, void, OnDisable, (app::AVProWindowsMediaMeshApply * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AVProWindowsMediaMeshApply * this_ptr))
} // namespace app::classes::AVProWindowsMediaMeshApply
