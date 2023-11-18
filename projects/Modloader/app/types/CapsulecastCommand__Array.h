#pragma once
#include <Modloader/app/structs/CapsulecastCommand__Array.h>
#include <Modloader/app/structs/CapsulecastCommand__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CapsulecastCommand__Array {
        inline app::CapsulecastCommand__Array__Class** type_info() {
            static app::CapsulecastCommand__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CapsulecastCommand__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CapsulecastCommand__Array__Class* get_class() {
            return il2cpp::get_class<app::CapsulecastCommand__Array__Class>(type_info(), "UnityEngine", "CapsulecastCommand[]");
        }
        inline app::CapsulecastCommand__Array* create() {
            return il2cpp::create_object<app::CapsulecastCommand__Array>(get_class());
        }
    } // namespace CapsulecastCommand__Array
} // namespace app::classes::types
