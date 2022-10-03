#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeZoneInfo__Class** type_info;
        inline app::TimeZoneInfo__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneInfo__Class>(type_info, "System", "TimeZoneInfo");
        }
        inline app::TimeZoneInfo* create() {
            return il2cpp::create_object<app::TimeZoneInfo>(get_class());
        }
        inline app::TimeZoneInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TimeZoneInfo__Array>(get_class(), size);
        }
    } // namespace TimeZoneInfo
} // namespace app::classes::types
