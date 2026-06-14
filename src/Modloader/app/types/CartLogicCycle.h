#pragma once
#include <Modloader/app/structs/CartLogicCycle.h>
#include <Modloader/app/structs/CartLogicCycle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartLogicCycle {
        inline app::CartLogicCycle__Class** type_info() {
            static app::CartLogicCycle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartLogicCycle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartLogicCycle__Class* get_class() {
            return il2cpp::get_class<app::CartLogicCycle__Class>(type_info(), "", "CartLogicCycle");
        }
        inline app::CartLogicCycle* create() {
            return il2cpp::create_object<app::CartLogicCycle>(get_class());
        }
    } // namespace CartLogicCycle
} // namespace app::classes::types
