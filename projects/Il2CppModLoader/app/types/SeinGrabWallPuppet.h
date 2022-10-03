#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGrabWallPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinGrabWallPuppet__Class** type_info;
        inline app::SeinGrabWallPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabWallPuppet__Class>(type_info, "", "SeinGrabWallPuppet");
        }
        inline app::SeinGrabWallPuppet* create() {
            return il2cpp::create_object<app::SeinGrabWallPuppet>(get_class());
        }
    } // namespace SeinGrabWallPuppet
} // namespace app::classes::types
