#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMesh {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMesh__Class** type_info;
        inline app::IMesh__Class* get_class() {
            return il2cpp::get_class<app::IMesh__Class>(type_info, "TriangleNet.Meshing", "IMesh");
        }
    } // namespace IMesh
} // namespace app::classes::types
