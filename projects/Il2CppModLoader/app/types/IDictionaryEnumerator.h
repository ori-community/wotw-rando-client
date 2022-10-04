#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDictionaryEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDictionaryEnumerator__Class** type_info;
        inline app::IDictionaryEnumerator__Class* get_class() {
            return il2cpp::get_class<app::IDictionaryEnumerator__Class>(type_info, "System.Collections", "IDictionaryEnumerator");
        }
        inline app::IDictionaryEnumerator* create() {
            return il2cpp::create_object<app::IDictionaryEnumerator>(get_class());
        }
    } // namespace IDictionaryEnumerator
} // namespace app::classes::types
