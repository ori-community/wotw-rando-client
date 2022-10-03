#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGrabSurfacePuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinGrabSurfacePuppet__Class** type_info;
        inline app::SeinGrabSurfacePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabSurfacePuppet__Class>(type_info, "", "SeinGrabSurfacePuppet");
        }
        inline app::SeinGrabSurfacePuppet* create() {
            return il2cpp::create_object<app::SeinGrabSurfacePuppet>(get_class());
        }
    } // namespace SeinGrabSurfacePuppet
} // namespace app::classes::types
