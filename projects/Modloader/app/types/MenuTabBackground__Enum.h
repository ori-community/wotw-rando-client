#pragma once
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/MenuTabBackground__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuTabBackground__Enum {
        inline app::MenuTabBackground__Enum__Class** type_info() {
            static app::MenuTabBackground__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MenuTabBackground__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MenuTabBackground__Enum__Class* get_class() {
            return il2cpp::get_class<app::MenuTabBackground__Enum__Class>(type_info(), "", "MenuTabBackground");
        }
        inline app::MenuTabBackground__Enum* create() {
            return il2cpp::create_object<app::MenuTabBackground__Enum>(get_class());
        }
    } // namespace MenuTabBackground__Enum
} // namespace app::classes::types
