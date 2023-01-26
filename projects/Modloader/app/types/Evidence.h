#pragma once
#include <Modloader/app/structs/Evidence.h>
#include <Modloader/app/structs/Evidence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Evidence {
        inline app::Evidence__Class** type_info() {
            static app::Evidence__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Evidence__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Evidence__Class* get_class() {
            return il2cpp::get_class<app::Evidence__Class>(type_info(), "System.Security.Policy", "Evidence");
        }
        inline app::Evidence* create() {
            return il2cpp::create_object<app::Evidence>(get_class());
        }
    } // namespace Evidence
} // namespace app::classes::types
