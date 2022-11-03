#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyUpdate_XRUpdate {
        namespace {
            inline app::EarlyUpdate_XRUpdate__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_XRUpdate__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_XRUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_XRUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "XRUpdate");
        }
        inline app::EarlyUpdate_XRUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate_XRUpdate>(get_class());
        }
        inline app::EarlyUpdate_XRUpdate__Boxed* box(app::EarlyUpdate_XRUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate_XRUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_XRUpdate
} // namespace app::classes::types
