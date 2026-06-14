#pragma once
#include <Modloader/app/structs/CrabSpinLoopAttackBehaviour.h>
#include <Modloader/app/structs/CrabSpinLoopAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabSpinLoopAttackBehaviour {
        inline app::CrabSpinLoopAttackBehaviour__Class** type_info() {
            static app::CrabSpinLoopAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabSpinLoopAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabSpinLoopAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabSpinLoopAttackBehaviour__Class>(type_info(), "Moon", "CrabSpinLoopAttackBehaviour");
        }
        inline app::CrabSpinLoopAttackBehaviour* create() {
            return il2cpp::create_object<app::CrabSpinLoopAttackBehaviour>(get_class());
        }
    } // namespace CrabSpinLoopAttackBehaviour
} // namespace app::classes::types
