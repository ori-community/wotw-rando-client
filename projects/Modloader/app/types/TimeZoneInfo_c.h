#pragma once
#include <Modloader/app/structs/TimeZoneInfo_c.h>
#include <Modloader/app/structs/TimeZoneInfo_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo_c {
        inline app::TimeZoneInfo_c__Class** type_info() {
            static app::TimeZoneInfo_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeZoneInfo_c__Class**)(modloader::win::memory::resolve_rva(0x04728590));
            }
            return cache;
        }
        inline app::TimeZoneInfo_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeZoneInfo_c__Class>(type_info(), "System", "TimeZoneInfo", "<>c");
        }
        inline app::TimeZoneInfo_c* create() {
            return il2cpp::create_object<app::TimeZoneInfo_c>(get_class());
        }
    } // namespace TimeZoneInfo_c
} // namespace app::classes::types
