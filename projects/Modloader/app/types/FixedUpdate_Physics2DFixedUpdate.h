#pragma once
#include <Modloader/app/structs/FixedUpdate_Physics2DFixedUpdate.h>
#include <Modloader/app/structs/FixedUpdate_Physics2DFixedUpdate__Boxed.h>
#include <Modloader/app/structs/FixedUpdate_Physics2DFixedUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_Physics2DFixedUpdate {
        inline app::FixedUpdate_Physics2DFixedUpdate__Class** type_info() {
            static app::FixedUpdate_Physics2DFixedUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate_Physics2DFixedUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate_Physics2DFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_Physics2DFixedUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "Physics2DFixedUpdate");
        }
        inline app::FixedUpdate_Physics2DFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_Physics2DFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_Physics2DFixedUpdate__Boxed* box(app::FixedUpdate_Physics2DFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_Physics2DFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_Physics2DFixedUpdate
} // namespace app::classes::types
