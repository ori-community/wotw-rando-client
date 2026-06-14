#pragma once
#include <Modloader/app/structs/PiranhaAttackBehaviour.h>
#include <Modloader/app/structs/PiranhaAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaAttackBehaviour {
        inline app::PiranhaAttackBehaviour__Class** type_info() {
            static app::PiranhaAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaAttackBehaviour__Class>(type_info(), "", "PiranhaAttackBehaviour");
        }
        inline app::PiranhaAttackBehaviour* create() {
            return il2cpp::create_object<app::PiranhaAttackBehaviour>(get_class());
        }
    } // namespace PiranhaAttackBehaviour
} // namespace app::classes::types
