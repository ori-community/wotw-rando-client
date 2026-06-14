#pragma once
#include <Modloader/app/structs/KuLogicCycle_IsAllowedDelegate__Array.h>
#include <Modloader/app/structs/KuLogicCycle_IsAllowedDelegate__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuLogicCycle_IsAllowedDelegate__Array {
        inline app::KuLogicCycle_IsAllowedDelegate__Array__Class** type_info() {
            static app::KuLogicCycle_IsAllowedDelegate__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuLogicCycle_IsAllowedDelegate__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuLogicCycle_IsAllowedDelegate__Array__Class* get_class() {
            return il2cpp::get_class<app::KuLogicCycle_IsAllowedDelegate__Array__Class>(type_info(), "", "KuLogicCycle+IsAllowedDelegate[]");
        }
        inline app::KuLogicCycle_IsAllowedDelegate__Array* create() {
            return il2cpp::create_object<app::KuLogicCycle_IsAllowedDelegate__Array>(get_class());
        }
    } // namespace KuLogicCycle_IsAllowedDelegate__Array
} // namespace app::classes::types
