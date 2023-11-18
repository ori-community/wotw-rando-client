#pragma once
#include <Modloader/app/structs/RuntimeStructs_HandleStackMark.h>
#include <Modloader/app/structs/RuntimeStructs_HandleStackMark__Boxed.h>
#include <Modloader/app/structs/RuntimeStructs_HandleStackMark__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_HandleStackMark {
        inline app::RuntimeStructs_HandleStackMark__Class** type_info() {
            static app::RuntimeStructs_HandleStackMark__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeStructs_HandleStackMark__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeStructs_HandleStackMark__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_HandleStackMark__Class>(type_info(), "Mono", "RuntimeStructs", "HandleStackMark");
        }
        inline app::RuntimeStructs_HandleStackMark* create() {
            return il2cpp::create_object<app::RuntimeStructs_HandleStackMark>(get_class());
        }
        inline app::RuntimeStructs_HandleStackMark__Boxed* box(app::RuntimeStructs_HandleStackMark value) {
            return il2cpp::box_value<app::RuntimeStructs_HandleStackMark__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_HandleStackMark
} // namespace app::classes::types
