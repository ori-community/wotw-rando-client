#pragma once
#include <Modloader/app/structs/Door_OpenState__Enum.h>
#include <Modloader/app/structs/Door_OpenState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Door_OpenState__Enum {
        inline app::Door_OpenState__Enum__Class** type_info() {
            static app::Door_OpenState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Door_OpenState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Door_OpenState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Door_OpenState__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Door", "OpenState");
        }
        inline app::Door_OpenState__Enum* create() {
            return il2cpp::create_object<app::Door_OpenState__Enum>(get_class());
        }
    } // namespace Door_OpenState__Enum
} // namespace app::classes::types
