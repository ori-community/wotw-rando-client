#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AppOverrideKeys_t {
        namespace {
            inline app::AppOverrideKeys_t__Class* type_info_ref = nullptr;
        }
        inline app::AppOverrideKeys_t__Class** type_info = &type_info_ref;
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
        inline app::AppOverrideKeys_t__Array* create_array(const std::vector<app::AppOverrideKeys_t>& items) {
            return il2cpp::array_new<app::AppOverrideKeys_t__Array>(get_class(), items);
        }
    } // namespace AppOverrideKeys_t
} // namespace app::classes::types
