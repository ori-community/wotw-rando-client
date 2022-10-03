#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListDictionary__Class** type_info;
        inline app::ListDictionary__Class* get_class() {
            return il2cpp::get_class<app::ListDictionary__Class>(type_info, "System.Collections.Specialized", "ListDictionary");
        }
        inline app::ListDictionary* create() {
            return il2cpp::create_object<app::ListDictionary>(get_class());
        }
    } // namespace ListDictionary
} // namespace app::classes::types
