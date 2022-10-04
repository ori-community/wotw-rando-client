#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMeshFormat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMeshFormat__Class** type_info;
        inline app::IMeshFormat__Class* get_class() {
            return il2cpp::get_class<app::IMeshFormat__Class>(type_info, "TriangleNet.IO", "IMeshFormat");
        }
        inline app::IMeshFormat* create() {
            return il2cpp::create_object<app::IMeshFormat>(get_class());
        }
    } // namespace IMeshFormat
} // namespace app::classes::types
