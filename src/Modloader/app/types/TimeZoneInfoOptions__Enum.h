#pragma once
#include <Modloader/app/structs/TimeZoneInfoOptions__Enum.h>
#include <Modloader/app/structs/TimeZoneInfoOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeZoneInfoOptions__Enum {
        inline app::TimeZoneInfoOptions__Enum__Class** type_info() {
            static app::TimeZoneInfoOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeZoneInfoOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeZoneInfoOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimeZoneInfoOptions__Enum__Class>(type_info(), "System", "TimeZoneInfoOptions");
        }
        inline app::TimeZoneInfoOptions__Enum* create() {
            return il2cpp::create_object<app::TimeZoneInfoOptions__Enum>(get_class());
        }
    } // namespace TimeZoneInfoOptions__Enum
} // namespace app::classes::types
