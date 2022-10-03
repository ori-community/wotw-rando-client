#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeZone__Class** type_info;
        inline app::TimeZone__Class* get_class() {
            return il2cpp::get_class<app::TimeZone__Class>(type_info, "System", "TimeZone");
        }
        inline app::TimeZone* create() {
            return il2cpp::create_object<app::TimeZone>(get_class());
        }
    } // namespace TimeZone
} // namespace app::classes::types
