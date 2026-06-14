#pragma once
#include <Modloader/app/structs/HumanLimit.h>
#include <Modloader/app/structs/HumanLimit__Boxed.h>
#include <Modloader/app/structs/HumanLimit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HumanLimit {
        inline app::HumanLimit__Class** type_info() {
            static app::HumanLimit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HumanLimit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HumanLimit__Class* get_class() {
            return il2cpp::get_class<app::HumanLimit__Class>(type_info(), "UnityEngine", "HumanLimit");
        }
        inline app::HumanLimit* create() {
            return il2cpp::create_object<app::HumanLimit>(get_class());
        }
        inline app::HumanLimit__Boxed* box(app::HumanLimit value) {
            return il2cpp::box_value<app::HumanLimit__Boxed>(get_class(), value);
        }
    } // namespace HumanLimit
} // namespace app::classes::types
