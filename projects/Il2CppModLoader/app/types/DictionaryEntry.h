#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DictionaryEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DictionaryEntry__Class** type_info;
        inline app::DictionaryEntry__Class* get_class() {
            return il2cpp::get_class<app::DictionaryEntry__Class>(type_info, "System.Collections", "DictionaryEntry");
        }
        inline app::DictionaryEntry* create() {
            return il2cpp::create_object<app::DictionaryEntry>(get_class());
        }
        inline app::DictionaryEntry__Boxed* box(app::DictionaryEntry value) {
            return il2cpp::box_value<app::DictionaryEntry__Boxed>(get_class(), value);
        }
        inline app::DictionaryEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DictionaryEntry__Array>(get_class(), size);
        }
        inline app::DictionaryEntry__Array* create_array(const std::vector<app::DictionaryEntry__Boxed>& items) {
            return il2cpp::array_new<app::DictionaryEntry__Array>(get_class(), items);
        }
    } // namespace DictionaryEntry
} // namespace app::classes::types
