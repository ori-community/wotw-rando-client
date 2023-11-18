#pragma once
#include <Modloader/app/structs/RigidbodyConstraints__Enum.h>
#include <Modloader/app/structs/RigidbodyConstraints__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyConstraints__Enum {
        inline app::RigidbodyConstraints__Enum__Class** type_info() {
            static app::RigidbodyConstraints__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyConstraints__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyConstraints__Enum__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyConstraints__Enum__Class>(type_info(), "UnityEngine", "RigidbodyConstraints");
        }
        inline app::RigidbodyConstraints__Enum* create() {
            return il2cpp::create_object<app::RigidbodyConstraints__Enum>(get_class());
        }
    } // namespace RigidbodyConstraints__Enum
} // namespace app::classes::types
