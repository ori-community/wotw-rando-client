#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinController3D {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinController3D__Class** type_info;
        inline app::SeinController3D__Class* get_class() {
            return il2cpp::get_class<app::SeinController3D__Class>(type_info, "", "SeinController3D");
        }
        inline app::SeinController3D* create() {
            return il2cpp::create_object<app::SeinController3D>(get_class());
        }
    } // namespace SeinController3D
} // namespace app::classes::types
