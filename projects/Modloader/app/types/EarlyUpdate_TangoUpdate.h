#pragma once
#include <Modloader/app/structs/EarlyUpdate_TangoUpdate.h>
#include <Modloader/app/structs/EarlyUpdate_TangoUpdate__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_TangoUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_TangoUpdate {
        inline app::EarlyUpdate_TangoUpdate__Class** type_info() {
            static app::EarlyUpdate_TangoUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_TangoUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_TangoUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_TangoUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "TangoUpdate");
        }
        inline app::EarlyUpdate_TangoUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate_TangoUpdate>(get_class());
        }
        inline app::EarlyUpdate_TangoUpdate__Boxed* box(app::EarlyUpdate_TangoUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate_TangoUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_TangoUpdate
} // namespace app::classes::types
