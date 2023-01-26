#pragma once
#include <Modloader/app/structs/HasComponentCondition.h>
#include <Modloader/app/structs/HasComponentCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasComponentCondition {
        inline app::HasComponentCondition__Class** type_info() {
            static app::HasComponentCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasComponentCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasComponentCondition__Class* get_class() {
            return il2cpp::get_class<app::HasComponentCondition__Class>(type_info(), "", "HasComponentCondition");
        }
        inline app::HasComponentCondition* create() {
            return il2cpp::create_object<app::HasComponentCondition>(get_class());
        }
    } // namespace HasComponentCondition
} // namespace app::classes::types
