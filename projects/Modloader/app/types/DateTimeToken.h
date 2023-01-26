#pragma once
#include <Modloader/app/structs/DateTimeToken.h>
#include <Modloader/app/structs/DateTimeToken__Boxed.h>
#include <Modloader/app/structs/DateTimeToken__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeToken {
        inline app::DateTimeToken__Class** type_info() {
            static app::DateTimeToken__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DateTimeToken__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DateTimeToken__Class* get_class() {
            return il2cpp::get_class<app::DateTimeToken__Class>(type_info(), "System", "DateTimeToken");
        }
        inline app::DateTimeToken* create() {
            return il2cpp::create_object<app::DateTimeToken>(get_class());
        }
        inline app::DateTimeToken__Boxed* box(app::DateTimeToken value) {
            return il2cpp::box_value<app::DateTimeToken__Boxed>(get_class(), value);
        }
    } // namespace DateTimeToken
} // namespace app::classes::types
