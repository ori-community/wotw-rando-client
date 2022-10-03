#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CFDictionary__Class** type_info;
        inline app::CFDictionary__Class* get_class() {
            return il2cpp::get_class<app::CFDictionary__Class>(type_info, "Mono.Net", "CFDictionary");
        }
        inline app::CFDictionary* create() {
            return il2cpp::create_object<app::CFDictionary>(get_class());
        }
    } // namespace CFDictionary
} // namespace app::classes::types
