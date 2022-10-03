#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeZoneNotFoundException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeZoneNotFoundException__Class** type_info;
        inline app::TimeZoneNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneNotFoundException__Class>(type_info, "System", "TimeZoneNotFoundException");
        }
        inline app::TimeZoneNotFoundException* create() {
            return il2cpp::create_object<app::TimeZoneNotFoundException>(get_class());
        }
    } // namespace TimeZoneNotFoundException
} // namespace app::classes::types
