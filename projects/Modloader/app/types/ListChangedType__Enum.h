#pragma once
#include <Modloader/app/structs/ListChangedType__Enum.h>
#include <Modloader/app/structs/ListChangedType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListChangedType__Enum {
        inline app::ListChangedType__Enum__Class** type_info() {
            static app::ListChangedType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ListChangedType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ListChangedType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ListChangedType__Enum__Class>(type_info(), "System.ComponentModel", "ListChangedType");
        }
        inline app::ListChangedType__Enum* create() {
            return il2cpp::create_object<app::ListChangedType__Enum>(get_class());
        }
    } // namespace ListChangedType__Enum
} // namespace app::classes::types
