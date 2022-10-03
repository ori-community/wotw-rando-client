#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterestSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InterestSettings__Class** type_info;
        inline app::InterestSettings__Class* get_class() {
            return il2cpp::get_class<app::InterestSettings__Class>(type_info, "Moon", "InterestSettings");
        }
        inline app::InterestSettings* create() {
            return il2cpp::create_object<app::InterestSettings>(get_class());
        }
    } // namespace InterestSettings
} // namespace app::classes::types
