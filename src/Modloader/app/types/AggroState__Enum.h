#pragma once
#include <Modloader/app/structs/AggroState__Enum.h>
#include <Modloader/app/structs/AggroState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AggroState__Enum {
        inline app::AggroState__Enum__Class** type_info() {
            static app::AggroState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AggroState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AggroState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AggroState__Enum__Class>(type_info(), "", "AggroState");
        }
        inline app::AggroState__Enum* create() {
            return il2cpp::create_object<app::AggroState__Enum>(get_class());
        }
    } // namespace AggroState__Enum
} // namespace app::classes::types
