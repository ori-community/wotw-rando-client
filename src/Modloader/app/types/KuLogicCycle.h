#pragma once
#include <Modloader/app/structs/KuLogicCycle.h>
#include <Modloader/app/structs/KuLogicCycle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuLogicCycle {
        inline app::KuLogicCycle__Class** type_info() {
            static app::KuLogicCycle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuLogicCycle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuLogicCycle__Class* get_class() {
            return il2cpp::get_class<app::KuLogicCycle__Class>(type_info(), "", "KuLogicCycle");
        }
        inline app::KuLogicCycle* create() {
            return il2cpp::create_object<app::KuLogicCycle>(get_class());
        }
    } // namespace KuLogicCycle
} // namespace app::classes::types
