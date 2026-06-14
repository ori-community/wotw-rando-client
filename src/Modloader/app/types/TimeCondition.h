#pragma once
#include <Modloader/app/structs/TimeCondition.h>
#include <Modloader/app/structs/TimeCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeCondition {
        inline app::TimeCondition__Class** type_info() {
            static app::TimeCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeCondition__Class* get_class() {
            return il2cpp::get_class<app::TimeCondition__Class>(type_info(), "", "TimeCondition");
        }
        inline app::TimeCondition* create() {
            return il2cpp::create_object<app::TimeCondition>(get_class());
        }
    } // namespace TimeCondition
} // namespace app::classes::types
