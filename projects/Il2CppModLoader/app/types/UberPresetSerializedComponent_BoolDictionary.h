#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_BoolDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPresetSerializedComponent_BoolDictionary__Class** type_info;
        inline app::UberPresetSerializedComponent_BoolDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_BoolDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "BoolDictionary");
        }
        inline app::UberPresetSerializedComponent_BoolDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_BoolDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_BoolDictionary
} // namespace app::classes::types
