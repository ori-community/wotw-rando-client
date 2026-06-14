#pragma once
#include <Modloader/app/structs/BashAttackCritical.h>
#include <Modloader/app/structs/BashAttackCritical__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BashAttackCritical {
        inline app::BashAttackCritical__Class** type_info() {
            static app::BashAttackCritical__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BashAttackCritical__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BashAttackCritical__Class* get_class() {
            return il2cpp::get_class<app::BashAttackCritical__Class>(type_info(), "", "BashAttackCritical");
        }
        inline app::BashAttackCritical* create() {
            return il2cpp::create_object<app::BashAttackCritical>(get_class());
        }
    } // namespace BashAttackCritical
} // namespace app::classes::types
