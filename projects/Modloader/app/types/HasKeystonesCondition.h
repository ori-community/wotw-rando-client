#pragma once
#include <Modloader/app/structs/HasKeystonesCondition.h>
#include <Modloader/app/structs/HasKeystonesCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasKeystonesCondition {
        inline app::HasKeystonesCondition__Class** type_info() {
            static app::HasKeystonesCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasKeystonesCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasKeystonesCondition__Class* get_class() {
            return il2cpp::get_class<app::HasKeystonesCondition__Class>(type_info(), "", "HasKeystonesCondition");
        }
        inline app::HasKeystonesCondition* create() {
            return il2cpp::create_object<app::HasKeystonesCondition>(get_class());
        }
    } // namespace HasKeystonesCondition
} // namespace app::classes::types
