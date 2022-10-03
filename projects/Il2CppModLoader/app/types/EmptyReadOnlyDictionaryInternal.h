#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyReadOnlyDictionaryInternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyReadOnlyDictionaryInternal__Class** type_info;
        inline app::EmptyReadOnlyDictionaryInternal__Class* get_class() {
            return il2cpp::get_class<app::EmptyReadOnlyDictionaryInternal__Class>(type_info, "System.Collections", "EmptyReadOnlyDictionaryInternal");
        }
        inline app::EmptyReadOnlyDictionaryInternal* create() {
            return il2cpp::create_object<app::EmptyReadOnlyDictionaryInternal>(get_class());
        }
    } // namespace EmptyReadOnlyDictionaryInternal
} // namespace app::classes::types
