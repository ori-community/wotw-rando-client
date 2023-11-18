#pragma once
#include <Modloader/app/structs/PreUpdate_NewInputUpdate.h>
#include <Modloader/app/structs/PreUpdate_NewInputUpdate__Boxed.h>
#include <Modloader/app/structs/PreUpdate_NewInputUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_NewInputUpdate {
        inline app::PreUpdate_NewInputUpdate__Class** type_info() {
            static app::PreUpdate_NewInputUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreUpdate_NewInputUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreUpdate_NewInputUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_NewInputUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "NewInputUpdate");
        }
        inline app::PreUpdate_NewInputUpdate* create() {
            return il2cpp::create_object<app::PreUpdate_NewInputUpdate>(get_class());
        }
        inline app::PreUpdate_NewInputUpdate__Boxed* box(app::PreUpdate_NewInputUpdate value) {
            return il2cpp::box_value<app::PreUpdate_NewInputUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_NewInputUpdate
} // namespace app::classes::types
