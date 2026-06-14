#pragma once
#include <Modloader/app/structs/AppOverrideKeys_t.h>
#include <Modloader/app/structs/AppOverrideKeys_t__Array.h>
#include <Modloader/app/structs/AppOverrideKeys_t__Boxed.h>
#include <Modloader/app/structs/AppOverrideKeys_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppOverrideKeys_t {
        inline app::AppOverrideKeys_t__Class** type_info() {
            static app::AppOverrideKeys_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AppOverrideKeys_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AppOverrideKeys_t__Class* get_class() {
            return il2cpp::get_class<app::AppOverrideKeys_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "AppOverrideKeys_t");
        }
        inline app::AppOverrideKeys_t* create() {
            return il2cpp::create_object<app::AppOverrideKeys_t>(get_class());
        }
        inline app::AppOverrideKeys_t__Boxed* box(app::AppOverrideKeys_t value) {
            return il2cpp::box_value<app::AppOverrideKeys_t__Boxed>(get_class(), value);
        }
        inline app::AppOverrideKeys_t__Array* create_array(int size) {
            return il2cpp::array_new<app::AppOverrideKeys_t__Array>(get_class(), size);
        }
        inline app::AppOverrideKeys_t__Array* create_array(const std::vector<app::AppOverrideKeys_t>& items) {
            return il2cpp::array_new<app::AppOverrideKeys_t__Array>(get_class(), items);
        }
    } // namespace AppOverrideKeys_t
} // namespace app::classes::types
