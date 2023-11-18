#pragma once
#include <Modloader/app/structs/AppOverrideKeys_t__Array.h>
#include <Modloader/app/structs/AppOverrideKeys_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppOverrideKeys_t__Array {
        inline app::AppOverrideKeys_t__Array__Class** type_info() {
            static app::AppOverrideKeys_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AppOverrideKeys_t__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AppOverrideKeys_t__Array__Class* get_class() {
            return il2cpp::get_class<app::AppOverrideKeys_t__Array__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "AppOverrideKeys_t[]");
        }
        inline app::AppOverrideKeys_t__Array* create() {
            return il2cpp::create_object<app::AppOverrideKeys_t__Array>(get_class());
        }
    } // namespace AppOverrideKeys_t__Array
} // namespace app::classes::types
