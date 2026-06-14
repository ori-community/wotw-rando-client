#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LineMeshTextureTiler.h>

namespace app::classes::LineMeshTextureTiler {
    IL2CPP_REGISTER_METHOD(0x00FA6DD0, void, Awake, app::LineMeshTextureTiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FA6E60, void, Start, app::LineMeshTextureTiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FA6F40, void, LateUpdate, app::LineMeshTextureTiler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::LineMeshTextureTiler* this_ptr)
} // namespace app::classes::LineMeshTextureTiler
