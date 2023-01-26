#pragma once
#include <Modloader/app/structs/RigidbodyConstraints2D__Enum.h>
#include <Modloader/app/structs/RigidbodyConstraints2D__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyConstraints2D__Enum {
        inline app::RigidbodyConstraints2D__Enum__Class** type_info() {
            static app::RigidbodyConstraints2D__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyConstraints2D__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyConstraints2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyConstraints2D__Enum__Class>(type_info(), "UnityEngine", "RigidbodyConstraints2D");
        }
        inline app::RigidbodyConstraints2D__Enum* create() {
            return il2cpp::create_object<app::RigidbodyConstraints2D__Enum>(get_class());
        }
    } // namespace RigidbodyConstraints2D__Enum
} // namespace app::classes::types
