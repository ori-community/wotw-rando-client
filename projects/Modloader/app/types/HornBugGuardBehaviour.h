#pragma once
#include <Modloader/app/structs/HornBugGuardBehaviour.h>
#include <Modloader/app/structs/HornBugGuardBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugGuardBehaviour {
        inline app::HornBugGuardBehaviour__Class** type_info() {
            static app::HornBugGuardBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugGuardBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugGuardBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugGuardBehaviour__Class>(type_info(), "", "HornBugGuardBehaviour");
        }
        inline app::HornBugGuardBehaviour* create() {
            return il2cpp::create_object<app::HornBugGuardBehaviour>(get_class());
        }
    } // namespace HornBugGuardBehaviour
} // namespace app::classes::types
