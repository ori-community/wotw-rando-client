#pragma once
#include <Modloader/app/structs/HornBugStunBehaviour.h>
#include <Modloader/app/structs/HornBugStunBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugStunBehaviour {
        inline app::HornBugStunBehaviour__Class** type_info() {
            static app::HornBugStunBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugStunBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugStunBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugStunBehaviour__Class>(type_info(), "Moon", "HornBugStunBehaviour");
        }
        inline app::HornBugStunBehaviour* create() {
            return il2cpp::create_object<app::HornBugStunBehaviour>(get_class());
        }
    } // namespace HornBugStunBehaviour
} // namespace app::classes::types
