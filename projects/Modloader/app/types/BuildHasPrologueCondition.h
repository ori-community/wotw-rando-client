#pragma once
#include <Modloader/app/structs/BuildHasPrologueCondition.h>
#include <Modloader/app/structs/BuildHasPrologueCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuildHasPrologueCondition {
        inline app::BuildHasPrologueCondition__Class** type_info() {
            static app::BuildHasPrologueCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuildHasPrologueCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuildHasPrologueCondition__Class* get_class() {
            return il2cpp::get_class<app::BuildHasPrologueCondition__Class>(type_info(), "", "BuildHasPrologueCondition");
        }
        inline app::BuildHasPrologueCondition* create() {
            return il2cpp::create_object<app::BuildHasPrologueCondition>(get_class());
        }
    } // namespace BuildHasPrologueCondition
} // namespace app::classes::types
