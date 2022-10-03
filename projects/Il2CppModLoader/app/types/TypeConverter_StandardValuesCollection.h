#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeConverter_StandardValuesCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeConverter_StandardValuesCollection__Class** type_info;
        inline app::TypeConverter_StandardValuesCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeConverter_StandardValuesCollection__Class>(type_info, "System.ComponentModel", "TypeConverter", "StandardValuesCollection");
        }
        inline app::TypeConverter_StandardValuesCollection* create() {
            return il2cpp::create_object<app::TypeConverter_StandardValuesCollection>(get_class());
        }
    } // namespace TypeConverter_StandardValuesCollection
} // namespace app::classes::types
