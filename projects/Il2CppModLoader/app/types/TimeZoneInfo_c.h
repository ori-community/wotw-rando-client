#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeZoneInfo_c {
        inline app::TimeZoneInfo_c__Class** type_info = (app::TimeZoneInfo_c__Class**)(modloader::win::memory::resolve_rva(0x04728590));
        inline app::TimeZoneInfo_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_c__Class>(type_info, "System", "TimeZoneInfo", "<>c");
        }
        inline app::TimeZoneInfo_c* create() {
            return il2cpp::create_object<app::TimeZoneInfo_c>(get_class());
        }
    } // namespace TimeZoneInfo_c
} // namespace app::classes::types
