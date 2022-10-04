#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDictionary__Class** type_info;
        inline app::IDictionary__Class* get_class() {
            return il2cpp::get_class<app::IDictionary__Class>(type_info, "System.Collections", "IDictionary");
        }
        inline app::IDictionary* create() {
            return il2cpp::create_object<app::IDictionary>(get_class());
        }
    } // namespace IDictionary
} // namespace app::classes::types
