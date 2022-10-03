#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CultureData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CultureData__Class** type_info;
        inline app::CultureData__Class* get_class() {
            return il2cpp::get_class<app::CultureData__Class>(type_info, "System.Globalization", "CultureData");
        }
        inline app::CultureData* create() {
            return il2cpp::create_object<app::CultureData>(get_class());
        }
    } // namespace CultureData
} // namespace app::classes::types
