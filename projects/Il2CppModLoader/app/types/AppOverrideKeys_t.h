#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AppOverrideKeys_t {
        namespace {
            app::AppOverrideKeys_t__Class* type_info_ref = nullptr;
        }
        app::AppOverrideKeys_t__Class** type_info = &type_info_ref;
        inline app::AppOverrideKeys_t__Class* get_class() {
            return il2cpp::get_class<app::AppOverrideKeys_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "AppOverrideKeys_t");
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
    } // namespace AppOverrideKeys_t
} // namespace app::classes::types
