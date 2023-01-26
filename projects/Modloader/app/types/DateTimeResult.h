#pragma once
#include <Modloader/app/structs/DateTimeResult.h>
#include <Modloader/app/structs/DateTimeResult__Boxed.h>
#include <Modloader/app/structs/DateTimeResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeResult {
        inline app::DateTimeResult__Class** type_info() {
            static app::DateTimeResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeResult__Class* get_class() {
            return il2cpp::get_class<app::DateTimeResult__Class>(type_info(), "System", "DateTimeResult");
        }
        inline app::DateTimeResult* create() {
            return il2cpp::create_object<app::DateTimeResult>(get_class());
        }
        inline app::DateTimeResult__Boxed* box(app::DateTimeResult value) {
            return il2cpp::box_value<app::DateTimeResult__Boxed>(get_class(), value);
        }
    } // namespace DateTimeResult
} // namespace app::classes::types
