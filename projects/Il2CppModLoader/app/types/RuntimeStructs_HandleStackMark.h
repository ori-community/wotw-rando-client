#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_HandleStackMark {
        namespace {
            app::RuntimeStructs_HandleStackMark__Class* type_info_ref = nullptr;
        }
        app::RuntimeStructs_HandleStackMark__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_HandleStackMark__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_HandleStackMark__Class>(type_info, "Mono", "RuntimeStructs", "HandleStackMark");
        }
        inline app::RuntimeStructs_HandleStackMark* create() {
            return il2cpp::create_object<app::RuntimeStructs_HandleStackMark>(get_class());
        }
        inline app::RuntimeStructs_HandleStackMark__Boxed* box(app::RuntimeStructs_HandleStackMark value) {
            return il2cpp::box_value<app::RuntimeStructs_HandleStackMark__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_HandleStackMark
} // namespace app::classes::types
