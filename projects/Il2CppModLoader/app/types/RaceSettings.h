#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceSettings__Class** type_info;
        inline app::RaceSettings__Class* get_class() {
            return il2cpp::get_class<app::RaceSettings__Class>(type_info, "", "RaceSettings");
        }
        inline app::RaceSettings* create() {
            return il2cpp::create_object<app::RaceSettings>(get_class());
        }
        inline app::RaceSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceSettings__Array>(get_class(), size);
        }
    } // namespace RaceSettings
} // namespace app::classes::types
