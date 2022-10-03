#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_ColorDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPresetSerializedComponent_ColorDictionary__Class** type_info;
        inline app::UberPresetSerializedComponent_ColorDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_ColorDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "ColorDictionary");
        }
        inline app::UberPresetSerializedComponent_ColorDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_ColorDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_ColorDictionary
} // namespace app::classes::types
