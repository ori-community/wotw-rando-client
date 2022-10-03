#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringCollection__Class** type_info;
        inline app::StringCollection__Class* get_class() {
            return il2cpp::get_class<app::StringCollection__Class>(type_info, "System.Collections.Specialized", "StringCollection");
        }
        inline app::StringCollection* create() {
            return il2cpp::create_object<app::StringCollection>(get_class());
        }
    } // namespace StringCollection
} // namespace app::classes::types
