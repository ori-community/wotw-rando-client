#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeZoneInfo_c__Class** type_info;
        inline app::TimeZoneInfo_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_c__Class>(type_info, "System", "TimeZoneInfo", "<>c");
        }
        inline app::TimeZoneInfo_c* create() {
            return il2cpp::create_object<app::TimeZoneInfo_c>(get_class());
        }
    } // namespace TimeZoneInfo_c
} // namespace app::classes::types
