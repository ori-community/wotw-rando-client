#pragma once
#include <Modloader/app/structs/HasOreCondition.h>
#include <Modloader/app/structs/HasOreCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasOreCondition {
        inline app::HasOreCondition__Class** type_info() {
            static app::HasOreCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasOreCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasOreCondition__Class* get_class() {
            return il2cpp::get_class<app::HasOreCondition__Class>(type_info(), "", "HasOreCondition");
        }
        inline app::HasOreCondition* create() {
            return il2cpp::create_object<app::HasOreCondition>(get_class());
        }
    } // namespace HasOreCondition
} // namespace app::classes::types
