#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PathList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PathList__Class** type_info;
        inline app::PathList__Class* get_class() {
            return il2cpp::get_class<app::PathList__Class>(type_info, "System.Net", "PathList");
        }
        inline app::PathList* create() {
            return il2cpp::create_object<app::PathList>(get_class());
        }
    } // namespace PathList
} // namespace app::classes::types
