#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceConfiguration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceConfiguration__Class** type_info;
        inline app::RaceConfiguration__Class* get_class() {
            return il2cpp::get_class<app::RaceConfiguration__Class>(type_info, "", "RaceConfiguration");
        }
        inline app::RaceConfiguration* create() {
            return il2cpp::create_object<app::RaceConfiguration>(get_class());
        }
    } // namespace RaceConfiguration
} // namespace app::classes::types
