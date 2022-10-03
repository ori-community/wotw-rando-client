#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Path {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Path__Class** type_info;
        inline app::Path__Class* get_class() {
            return il2cpp::get_class<app::Path__Class>(type_info, "System.IO", "Path");
        }
        inline app::Path* create() {
            return il2cpp::create_object<app::Path>(get_class());
        }
    } // namespace Path
} // namespace app::classes::types
