#pragma once
#include <Modloader/app/structs/EarlyUpdate_XRUpdate.h>
#include <Modloader/app/structs/EarlyUpdate_XRUpdate__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_XRUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_XRUpdate {
        inline app::EarlyUpdate_XRUpdate__Class** type_info() {
            static app::EarlyUpdate_XRUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_XRUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_XRUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_XRUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "XRUpdate");
        }
        inline app::EarlyUpdate_XRUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate_XRUpdate>(get_class());
        }
        inline app::EarlyUpdate_XRUpdate__Boxed* box(app::EarlyUpdate_XRUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate_XRUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_XRUpdate
} // namespace app::classes::types
