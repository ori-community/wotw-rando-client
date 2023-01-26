#pragma once
#include <Modloader/app/structs/Update.h>
#include <Modloader/app/structs/Update__Boxed.h>
#include <Modloader/app/structs/Update__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Update {
        inline app::Update__Class** type_info() {
            static app::Update__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Update__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Update__Class* get_class() {
            return il2cpp::get_class<app::Update__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "Update");
        }
        inline app::Update* create() {
            return il2cpp::create_object<app::Update>(get_class());
        }
        inline app::Update__Boxed* box(app::Update value) {
            return il2cpp::box_value<app::Update__Boxed>(get_class(), value);
        }
    } // namespace Update
} // namespace app::classes::types
