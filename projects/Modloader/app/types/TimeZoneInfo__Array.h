#pragma once
#include <Modloader/app/structs/TimeZoneInfo__Array.h>
#include <Modloader/app/structs/TimeZoneInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfo__Array {
        inline app::TimeZoneInfo__Array__Class** type_info() {
            static app::TimeZoneInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeZoneInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeZoneInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneInfo__Array__Class>(type_info(), "System", "TimeZoneInfo[]");
        }
        inline app::TimeZoneInfo__Array* create() {
            return il2cpp::create_object<app::TimeZoneInfo__Array>(get_class());
        }
    } // namespace TimeZoneInfo__Array
} // namespace app::classes::types
