#pragma once
#include <Modloader/app/structs/SendMessageOptions__Enum.h>
#include <Modloader/app/structs/SendMessageOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendMessageOptions__Enum {
        inline app::SendMessageOptions__Enum__Class** type_info() {
            static app::SendMessageOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SendMessageOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SendMessageOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::SendMessageOptions__Enum__Class>(type_info(), "UnityEngine", "SendMessageOptions");
        }
        inline app::SendMessageOptions__Enum* create() {
            return il2cpp::create_object<app::SendMessageOptions__Enum>(get_class());
        }
    } // namespace SendMessageOptions__Enum
} // namespace app::classes::types
