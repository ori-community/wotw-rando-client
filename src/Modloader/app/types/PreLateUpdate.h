#pragma once
#include <Modloader/app/structs/PreLateUpdate.h>
#include <Modloader/app/structs/PreLateUpdate__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate {
        inline app::PreLateUpdate__Class** type_info() {
            static app::PreLateUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate__Class* get_class() {
            return il2cpp::get_class<app::PreLateUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate");
        }
        inline app::PreLateUpdate* create() {
            return il2cpp::create_object<app::PreLateUpdate>(get_class());
        }
        inline app::PreLateUpdate__Boxed* box(app::PreLateUpdate value) {
            return il2cpp::box_value<app::PreLateUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate
} // namespace app::classes::types
