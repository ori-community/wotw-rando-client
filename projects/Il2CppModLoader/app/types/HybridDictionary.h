#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HybridDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HybridDictionary__Class** type_info;
        inline app::HybridDictionary__Class* get_class() {
            return il2cpp::get_class<app::HybridDictionary__Class>(type_info, "System.Collections.Specialized", "HybridDictionary");
        }
        inline app::HybridDictionary* create() {
            return il2cpp::create_object<app::HybridDictionary>(get_class());
        }
    } // namespace HybridDictionary
} // namespace app::classes::types
