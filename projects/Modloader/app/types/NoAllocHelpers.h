#pragma once
#include <Modloader/app/structs/NoAllocHelpers.h>
#include <Modloader/app/structs/NoAllocHelpers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoAllocHelpers {
        inline app::NoAllocHelpers__Class** type_info() {
            static app::NoAllocHelpers__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NoAllocHelpers__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NoAllocHelpers__Class* get_class() {
            return il2cpp::get_class<app::NoAllocHelpers__Class>(type_info(), "UnityEngine", "NoAllocHelpers");
        }
        inline app::NoAllocHelpers* create() {
            return il2cpp::create_object<app::NoAllocHelpers>(get_class());
        }
    } // namespace NoAllocHelpers
} // namespace app::classes::types
