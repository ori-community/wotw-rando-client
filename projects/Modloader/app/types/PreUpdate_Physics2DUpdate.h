#pragma once
#include <Modloader/app/structs/PreUpdate_Physics2DUpdate.h>
#include <Modloader/app/structs/PreUpdate_Physics2DUpdate__Boxed.h>
#include <Modloader/app/structs/PreUpdate_Physics2DUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_Physics2DUpdate {
        inline app::PreUpdate_Physics2DUpdate__Class** type_info() {
            static app::PreUpdate_Physics2DUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreUpdate_Physics2DUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreUpdate_Physics2DUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_Physics2DUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "Physics2DUpdate");
        }
        inline app::PreUpdate_Physics2DUpdate* create() {
            return il2cpp::create_object<app::PreUpdate_Physics2DUpdate>(get_class());
        }
        inline app::PreUpdate_Physics2DUpdate__Boxed* box(app::PreUpdate_Physics2DUpdate value) {
            return il2cpp::box_value<app::PreUpdate_Physics2DUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_Physics2DUpdate
} // namespace app::classes::types
