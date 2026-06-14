#pragma once
#include <Modloader/app/structs/Time.h>
#include <Modloader/app/structs/Time__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Time {
        inline app::Time__Class** type_info() {
            static app::Time__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Time__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Time__Class* get_class() {
            return il2cpp::get_class<app::Time__Class>(type_info(), "UnityEngine", "Time");
        }
        inline app::Time* create() {
            return il2cpp::create_object<app::Time>(get_class());
        }
    } // namespace Time
} // namespace app::classes::types
