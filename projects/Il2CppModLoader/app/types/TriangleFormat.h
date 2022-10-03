#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriangleFormat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TriangleFormat__Class** type_info;
        inline app::TriangleFormat__Class* get_class() {
            return il2cpp::get_class<app::TriangleFormat__Class>(type_info, "TriangleNet.IO", "TriangleFormat");
        }
        inline app::TriangleFormat* create() {
            return il2cpp::create_object<app::TriangleFormat>(get_class());
        }
    } // namespace TriangleFormat
} // namespace app::classes::types
