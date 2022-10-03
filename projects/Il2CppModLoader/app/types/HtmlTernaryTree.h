#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HtmlTernaryTree {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HtmlTernaryTree__Class** type_info;
        inline app::HtmlTernaryTree__Class* get_class() {
            return il2cpp::get_class<app::HtmlTernaryTree__Class>(type_info, "System.Xml", "HtmlTernaryTree");
        }
        inline app::HtmlTernaryTree* create() {
            return il2cpp::create_object<app::HtmlTernaryTree>(get_class());
        }
    } // namespace HtmlTernaryTree
} // namespace app::classes::types
