#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeResult {
        namespace {
            inline app::DateTimeResult__Class* type_info_ref = nullptr;
        }
        inline app::DateTimeResult__Class** type_info = &type_info_ref;
        inline app::DateTimeResult__Class* get_class() {
            return il2cpp::get_class<app::DateTimeResult__Class>(type_info, "System", "DateTimeResult");
        }
        inline app::DateTimeResult* create() {
            return il2cpp::create_object<app::DateTimeResult>(get_class());
        }
        inline app::DateTimeResult__Boxed* box(app::DateTimeResult value) {
            return il2cpp::box_value<app::DateTimeResult__Boxed>(get_class(), value);
        }
    } // namespace DateTimeResult
} // namespace app::classes::types
