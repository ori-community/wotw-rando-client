#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PathList_PathListComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PathList_PathListComparer__Class** type_info;
        inline app::PathList_PathListComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::PathList_PathListComparer__Class>(type_info, "System.Net", "PathList", "PathListComparer");
        }
        inline app::PathList_PathListComparer* create() {
            return il2cpp::create_object<app::PathList_PathListComparer>(get_class());
        }
    } // namespace PathList_PathListComparer
} // namespace app::classes::types
