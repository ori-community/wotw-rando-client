#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMesh {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMesh__Class** type_info;
        inline app::IMesh__Class* get_class() {
            return il2cpp::get_class<app::IMesh__Class>(type_info, "TriangleNet.Meshing", "IMesh");
        }
        inline app::IMesh* create() {
            return il2cpp::create_object<app::IMesh>(get_class());
        }
    } // namespace IMesh
} // namespace app::classes::types
