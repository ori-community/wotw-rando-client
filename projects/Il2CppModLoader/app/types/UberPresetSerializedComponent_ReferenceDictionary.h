#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_ReferenceDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPresetSerializedComponent_ReferenceDictionary__Class** type_info;
        inline app::UberPresetSerializedComponent_ReferenceDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_ReferenceDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "ReferenceDictionary");
        }
        inline app::UberPresetSerializedComponent_ReferenceDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_ReferenceDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_ReferenceDictionary
} // namespace app::classes::types
