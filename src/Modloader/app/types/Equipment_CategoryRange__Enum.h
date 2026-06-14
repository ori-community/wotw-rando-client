#pragma once
#include <Modloader/app/structs/Equipment_CategoryRange__Enum.h>
#include <Modloader/app/structs/Equipment_CategoryRange__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Equipment_CategoryRange__Enum {
        inline app::Equipment_CategoryRange__Enum__Class** type_info() {
            static app::Equipment_CategoryRange__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Equipment_CategoryRange__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Equipment_CategoryRange__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Equipment_CategoryRange__Enum__Class>(type_info(), "", "Equipment", "CategoryRange");
        }
        inline app::Equipment_CategoryRange__Enum* create() {
            return il2cpp::create_object<app::Equipment_CategoryRange__Enum>(get_class());
        }
    } // namespace Equipment_CategoryRange__Enum
} // namespace app::classes::types
