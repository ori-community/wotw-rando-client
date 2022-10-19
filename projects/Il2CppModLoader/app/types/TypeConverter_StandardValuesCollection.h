#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeConverter_StandardValuesCollection {
        inline app::TypeConverter_StandardValuesCollection__Class** type_info = (app::TypeConverter_StandardValuesCollection__Class**)(modloader::win::memory::resolve_rva(0x04764220));
        inline app::TypeConverter_StandardValuesCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeConverter_StandardValuesCollection__Class>(type_info, "System.ComponentModel", "TypeConverter", "StandardValuesCollection");
        }
        inline app::TypeConverter_StandardValuesCollection* create() {
            return il2cpp::create_object<app::TypeConverter_StandardValuesCollection>(get_class());
        }
    } // namespace TypeConverter_StandardValuesCollection
} // namespace app::classes::types
