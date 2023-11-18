#pragma once
#include <Modloader/app/structs/CompoundCondition.h>
#include <Modloader/app/structs/CompoundCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompoundCondition {
        inline app::CompoundCondition__Class** type_info() {
            static app::CompoundCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompoundCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompoundCondition__Class* get_class() {
            return il2cpp::get_class<app::CompoundCondition__Class>(type_info(), "", "CompoundCondition");
        }
        inline app::CompoundCondition* create() {
            return il2cpp::create_object<app::CompoundCondition>(get_class());
        }
    } // namespace CompoundCondition
} // namespace app::classes::types
