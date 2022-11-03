#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeToken {
        namespace {
            inline app::DateTimeToken__Class* type_info_ref = nullptr;
        }
        inline app::DateTimeToken__Class** type_info = &type_info_ref;
        inline app::DateTimeToken__Class* get_class() {
            return il2cpp::get_class<app::DateTimeToken__Class>(type_info, "System", "DateTimeToken");
        }
        inline app::DateTimeToken* create() {
            return il2cpp::create_object<app::DateTimeToken>(get_class());
        }
        inline app::DateTimeToken__Boxed* box(app::DateTimeToken value) {
            return il2cpp::box_value<app::DateTimeToken__Boxed>(get_class(), value);
        }
    } // namespace DateTimeToken
} // namespace app::classes::types
