#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FontData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FontData__Class** type_info;
        inline app::FontData__Class* get_class() {
            return il2cpp::get_class<app::FontData__Class>(type_info, "UnityEngine.UI", "FontData");
        }
        inline app::FontData* create() {
            return il2cpp::create_object<app::FontData>(get_class());
        }
    } // namespace FontData
} // namespace app::classes::types
