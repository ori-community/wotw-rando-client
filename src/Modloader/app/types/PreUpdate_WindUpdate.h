#pragma once
#include <Modloader/app/structs/PreUpdate_WindUpdate.h>
#include <Modloader/app/structs/PreUpdate_WindUpdate__Boxed.h>
#include <Modloader/app/structs/PreUpdate_WindUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_WindUpdate {
        inline app::PreUpdate_WindUpdate__Class** type_info() {
            static app::PreUpdate_WindUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreUpdate_WindUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreUpdate_WindUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_WindUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "WindUpdate");
        }
        inline app::PreUpdate_WindUpdate* create() {
            return il2cpp::create_object<app::PreUpdate_WindUpdate>(get_class());
        }
        inline app::PreUpdate_WindUpdate__Boxed* box(app::PreUpdate_WindUpdate value) {
            return il2cpp::box_value<app::PreUpdate_WindUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_WindUpdate
} // namespace app::classes::types
