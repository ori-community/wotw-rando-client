#pragma once
#include <Modloader/app/structs/AllConditions_1.h>
#include <Modloader/app/structs/AllConditions_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllConditions_1 {
        inline app::AllConditions_1__Class** type_info() {
            static app::AllConditions_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AllConditions_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AllConditions_1__Class* get_class() {
            return il2cpp::get_class<app::AllConditions_1__Class>(type_info(), "fsm", "AllConditions");
        }
        inline app::AllConditions_1* create() {
            return il2cpp::create_object<app::AllConditions_1>(get_class());
        }
    } // namespace AllConditions_1
} // namespace app::classes::types
