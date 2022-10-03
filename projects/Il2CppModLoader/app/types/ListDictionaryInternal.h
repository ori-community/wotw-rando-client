#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListDictionaryInternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListDictionaryInternal__Class** type_info;
        inline app::ListDictionaryInternal__Class* get_class() {
            return il2cpp::get_class<app::ListDictionaryInternal__Class>(type_info, "System.Collections", "ListDictionaryInternal");
        }
        inline app::ListDictionaryInternal* create() {
            return il2cpp::create_object<app::ListDictionaryInternal>(get_class());
        }
    } // namespace ListDictionaryInternal
} // namespace app::classes::types
