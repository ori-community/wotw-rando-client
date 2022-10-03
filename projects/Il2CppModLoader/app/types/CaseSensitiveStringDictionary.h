#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CaseSensitiveStringDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CaseSensitiveStringDictionary__Class** type_info;
        inline app::CaseSensitiveStringDictionary__Class* get_class() {
            return il2cpp::get_class<app::CaseSensitiveStringDictionary__Class>(type_info, "System.Collections.Specialized", "CaseSensitiveStringDictionary");
        }
        inline app::CaseSensitiveStringDictionary* create() {
            return il2cpp::create_object<app::CaseSensitiveStringDictionary>(get_class());
        }
    } // namespace CaseSensitiveStringDictionary
} // namespace app::classes::types
