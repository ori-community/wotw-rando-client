#pragma once
#include <Modloader/app/structs/HornBugIdleBehaviour.h>
#include <Modloader/app/structs/HornBugIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugIdleBehaviour {
        inline app::HornBugIdleBehaviour__Class** type_info() {
            static app::HornBugIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugIdleBehaviour__Class>(type_info(), "", "HornBugIdleBehaviour");
        }
        inline app::HornBugIdleBehaviour* create() {
            return il2cpp::create_object<app::HornBugIdleBehaviour>(get_class());
        }
    } // namespace HornBugIdleBehaviour
} // namespace app::classes::types
