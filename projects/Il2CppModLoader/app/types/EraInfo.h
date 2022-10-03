#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EraInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EraInfo__Class** type_info;
        inline app::EraInfo__Class* get_class() {
            return il2cpp::get_class<app::EraInfo__Class>(type_info, "System.Globalization", "EraInfo");
        }
        inline app::EraInfo* create() {
            return il2cpp::create_object<app::EraInfo>(get_class());
        }
        inline app::EraInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::EraInfo__Array>(get_class(), size);
        }
    } // namespace EraInfo
} // namespace app::classes::types
