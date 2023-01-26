#pragma once
#include <Modloader/app/structs/TouchType__Enum.h>
#include <Modloader/app/structs/TouchType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TouchType__Enum {
        inline app::TouchType__Enum__Class** type_info() {
            static app::TouchType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TouchType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TouchType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TouchType__Enum__Class>(type_info(), "UnityEngine", "TouchType");
        }
        inline app::TouchType__Enum* create() {
            return il2cpp::create_object<app::TouchType__Enum>(get_class());
        }
    } // namespace TouchType__Enum
} // namespace app::classes::types
