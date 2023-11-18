#pragma once
#include <Modloader/app/structs/HasAreaMapCondition.h>
#include <Modloader/app/structs/HasAreaMapCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasAreaMapCondition {
        inline app::HasAreaMapCondition__Class** type_info() {
            static app::HasAreaMapCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasAreaMapCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasAreaMapCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAreaMapCondition__Class>(type_info(), "", "HasAreaMapCondition");
        }
        inline app::HasAreaMapCondition* create() {
            return il2cpp::create_object<app::HasAreaMapCondition>(get_class());
        }
    } // namespace HasAreaMapCondition
} // namespace app::classes::types
