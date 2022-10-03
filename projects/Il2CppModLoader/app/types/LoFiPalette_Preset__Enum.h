#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoFiPalette_Preset__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoFiPalette_Preset__Enum__Class** type_info;
        inline app::LoFiPalette_Preset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LoFiPalette_Preset__Enum__Class>(type_info, "Colorful", "LoFiPalette", "Preset");
        }
        inline app::LoFiPalette_Preset__Enum* create() {
            return il2cpp::create_object<app::LoFiPalette_Preset__Enum>(get_class());
        }
    } // namespace LoFiPalette_Preset__Enum
} // namespace app::classes::types
