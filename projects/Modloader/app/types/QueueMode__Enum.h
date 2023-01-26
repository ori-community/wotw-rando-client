#pragma once
#include <Modloader/app/structs/QueueMode__Enum.h>
#include <Modloader/app/structs/QueueMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QueueMode__Enum {
        inline app::QueueMode__Enum__Class** type_info() {
            static app::QueueMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QueueMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QueueMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::QueueMode__Enum__Class>(type_info(), "UnityEngine", "QueueMode");
        }
        inline app::QueueMode__Enum* create() {
            return il2cpp::create_object<app::QueueMode__Enum>(get_class());
        }
    } // namespace QueueMode__Enum
} // namespace app::classes::types
