#pragma once
#include <Modloader/app/structs/PreUpdate_AIUpdate.h>
#include <Modloader/app/structs/PreUpdate_AIUpdate__Boxed.h>
#include <Modloader/app/structs/PreUpdate_AIUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_AIUpdate {
        inline app::PreUpdate_AIUpdate__Class** type_info() {
            static app::PreUpdate_AIUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreUpdate_AIUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreUpdate_AIUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_AIUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "AIUpdate");
        }
        inline app::PreUpdate_AIUpdate* create() {
            return il2cpp::create_object<app::PreUpdate_AIUpdate>(get_class());
        }
        inline app::PreUpdate_AIUpdate__Boxed* box(app::PreUpdate_AIUpdate value) {
            return il2cpp::box_value<app::PreUpdate_AIUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_AIUpdate
} // namespace app::classes::types
