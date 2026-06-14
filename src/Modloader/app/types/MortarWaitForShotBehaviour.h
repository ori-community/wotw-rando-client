#pragma once
#include <Modloader/app/structs/MortarWaitForShotBehaviour.h>
#include <Modloader/app/structs/MortarWaitForShotBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarWaitForShotBehaviour {
        inline app::MortarWaitForShotBehaviour__Class** type_info() {
            static app::MortarWaitForShotBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarWaitForShotBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarWaitForShotBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarWaitForShotBehaviour__Class>(type_info(), "", "MortarWaitForShotBehaviour");
        }
        inline app::MortarWaitForShotBehaviour* create() {
            return il2cpp::create_object<app::MortarWaitForShotBehaviour>(get_class());
        }
    } // namespace MortarWaitForShotBehaviour
} // namespace app::classes::types
