#pragma once
#include <Modloader/app/structs/CrossFadeControl.h>
#include <Modloader/app/structs/CrossFadeControl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossFadeControl {
        inline app::CrossFadeControl__Class** type_info() {
            static app::CrossFadeControl__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossFadeControl__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossFadeControl__Class* get_class() {
            return il2cpp::get_class<app::CrossFadeControl__Class>(type_info(), "", "CrossFadeControl");
        }
        inline app::CrossFadeControl* create() {
            return il2cpp::create_object<app::CrossFadeControl>(get_class());
        }
    } // namespace CrossFadeControl
} // namespace app::classes::types
