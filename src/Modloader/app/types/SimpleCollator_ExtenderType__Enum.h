#pragma once
#include <Modloader/app/structs/SimpleCollator_ExtenderType__Enum.h>
#include <Modloader/app/structs/SimpleCollator_ExtenderType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleCollator_ExtenderType__Enum {
        inline app::SimpleCollator_ExtenderType__Enum__Class** type_info() {
            static app::SimpleCollator_ExtenderType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleCollator_ExtenderType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleCollator_ExtenderType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleCollator_ExtenderType__Enum__Class>(type_info(), "Mono.Globalization.Unicode", "SimpleCollator", "ExtenderType");
        }
        inline app::SimpleCollator_ExtenderType__Enum* create() {
            return il2cpp::create_object<app::SimpleCollator_ExtenderType__Enum>(get_class());
        }
    } // namespace SimpleCollator_ExtenderType__Enum
} // namespace app::classes::types
