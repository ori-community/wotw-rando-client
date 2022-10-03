#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeathInformation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeathInformation__Class** type_info;
        inline app::DeathInformation__Class* get_class() {
            return il2cpp::get_class<app::DeathInformation__Class>(type_info, "", "DeathInformation");
        }
        inline app::DeathInformation* create() {
            return il2cpp::create_object<app::DeathInformation>(get_class());
        }
        inline app::DeathInformation__Array* create_array(int size) {
            return il2cpp::array_new<app::DeathInformation__Array>(get_class(), size);
        }
    } // namespace DeathInformation
} // namespace app::classes::types
