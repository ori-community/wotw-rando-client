#pragma once
#include <Modloader/app/structs/PersistentListenerMode__Enum.h>
#include <Modloader/app/structs/PersistentListenerMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PersistentListenerMode__Enum {
        inline app::PersistentListenerMode__Enum__Class** type_info() {
            static app::PersistentListenerMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PersistentListenerMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PersistentListenerMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PersistentListenerMode__Enum__Class>(type_info(), "UnityEngine.Events", "PersistentListenerMode");
        }
        inline app::PersistentListenerMode__Enum* create() {
            return il2cpp::create_object<app::PersistentListenerMode__Enum>(get_class());
        }
    } // namespace PersistentListenerMode__Enum
} // namespace app::classes::types
