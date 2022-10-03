#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DictionaryEntry__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DictionaryEntry__Array__Class** type_info;
        inline app::DictionaryEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::DictionaryEntry__Array__Class>(type_info, "System.Collections", "DictionaryEntry[]");
        }
        inline app::DictionaryEntry__Array* create() {
            return il2cpp::create_object<app::DictionaryEntry__Array>(get_class());
        }
    } // namespace DictionaryEntry__Array
} // namespace app::classes::types
