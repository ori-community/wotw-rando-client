#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_FloatDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPresetSerializedComponent_FloatDictionary__Class** type_info;
        inline app::UberPresetSerializedComponent_FloatDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_FloatDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "FloatDictionary");
        }
        inline app::UberPresetSerializedComponent_FloatDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_FloatDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_FloatDictionary
} // namespace app::classes::types
