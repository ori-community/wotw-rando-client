#pragma once
#include <Modloader/app/structs/CrabClawThreeHitAttackBehaviour.h>
#include <Modloader/app/structs/CrabClawThreeHitAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabClawThreeHitAttackBehaviour {
        inline app::CrabClawThreeHitAttackBehaviour__Class** type_info() {
            static app::CrabClawThreeHitAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabClawThreeHitAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabClawThreeHitAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabClawThreeHitAttackBehaviour__Class>(type_info(), "Moon", "CrabClawThreeHitAttackBehaviour");
        }
        inline app::CrabClawThreeHitAttackBehaviour* create() {
            return il2cpp::create_object<app::CrabClawThreeHitAttackBehaviour>(get_class());
        }
    } // namespace CrabClawThreeHitAttackBehaviour
} // namespace app::classes::types
