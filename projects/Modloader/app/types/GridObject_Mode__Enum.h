#pragma once
#include <Modloader/app/structs/GridObject_Mode__Enum.h>
#include <Modloader/app/structs/GridObject_Mode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GridObject_Mode__Enum {
        inline app::GridObject_Mode__Enum__Class** type_info() {
            static app::GridObject_Mode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GridObject_Mode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GridObject_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GridObject_Mode__Enum__Class>(type_info(), "", "GridObject", "Mode");
        }
        inline app::GridObject_Mode__Enum* create() {
            return il2cpp::create_object<app::GridObject_Mode__Enum>(get_class());
        }
    } // namespace GridObject_Mode__Enum
} // namespace app::classes::types
