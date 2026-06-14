#pragma once
#include <Modloader/app/structs/DateTimeRawInfo.h>
#include <Modloader/app/structs/DateTimeRawInfo__Boxed.h>
#include <Modloader/app/structs/DateTimeRawInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeRawInfo {
        inline app::DateTimeRawInfo__Class** type_info() {
            static app::DateTimeRawInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeRawInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeRawInfo__Class* get_class() {
            return il2cpp::get_class<app::DateTimeRawInfo__Class>(type_info(), "System", "DateTimeRawInfo");
        }
        inline app::DateTimeRawInfo* create() {
            return il2cpp::create_object<app::DateTimeRawInfo>(get_class());
        }
        inline app::DateTimeRawInfo__Boxed* box(app::DateTimeRawInfo value) {
            return il2cpp::box_value<app::DateTimeRawInfo__Boxed>(get_class(), value);
        }
    } // namespace DateTimeRawInfo
} // namespace app::classes::types
