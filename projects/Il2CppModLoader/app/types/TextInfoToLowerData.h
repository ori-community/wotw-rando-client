#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextInfoToLowerData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextInfoToLowerData__Class** type_info;
        inline app::TextInfoToLowerData__Class* get_class() {
            return il2cpp::get_class<app::TextInfoToLowerData__Class>(type_info, "System.Globalization", "TextInfoToLowerData");
        }
        inline app::TextInfoToLowerData* create() {
            return il2cpp::create_object<app::TextInfoToLowerData>(get_class());
        }
    } // namespace TextInfoToLowerData
} // namespace app::classes::types
