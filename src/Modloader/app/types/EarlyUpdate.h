#pragma once
#include <Modloader/app/structs/EarlyUpdate.h>
#include <Modloader/app/structs/EarlyUpdate__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate {
        inline app::EarlyUpdate__Class** type_info() {
            static app::EarlyUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate__Class* get_class() {
            return il2cpp::get_class<app::EarlyUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate");
        }
        inline app::EarlyUpdate* create() {
            return il2cpp::create_object<app::EarlyUpdate>(get_class());
        }
        inline app::EarlyUpdate__Boxed* box(app::EarlyUpdate value) {
            return il2cpp::box_value<app::EarlyUpdate__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate
} // namespace app::classes::types
