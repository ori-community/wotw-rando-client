#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XMLDiffLoader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XMLDiffLoader__Class** type_info;
        inline app::XMLDiffLoader__Class* get_class() {
            return il2cpp::get_class<app::XMLDiffLoader__Class>(type_info, "System.Data", "XMLDiffLoader");
        }
        inline app::XMLDiffLoader* create() {
            return il2cpp::create_object<app::XMLDiffLoader>(get_class());
        }
    } // namespace XMLDiffLoader
} // namespace app::classes::types
