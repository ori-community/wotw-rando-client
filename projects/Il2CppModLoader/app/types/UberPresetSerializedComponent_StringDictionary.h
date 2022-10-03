#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_StringDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPresetSerializedComponent_StringDictionary__Class** type_info;
        inline app::UberPresetSerializedComponent_StringDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_StringDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "StringDictionary");
        }
        inline app::UberPresetSerializedComponent_StringDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_StringDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_StringDictionary
} // namespace app::classes::types
