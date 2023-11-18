#pragma once
#include <Modloader/app/structs/FixedUpdate_DirectorFixedUpdate.h>
#include <Modloader/app/structs/FixedUpdate_DirectorFixedUpdate__Boxed.h>
#include <Modloader/app/structs/FixedUpdate_DirectorFixedUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_DirectorFixedUpdate {
        inline app::FixedUpdate_DirectorFixedUpdate__Class** type_info() {
            static app::FixedUpdate_DirectorFixedUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate_DirectorFixedUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate_DirectorFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_DirectorFixedUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "DirectorFixedUpdate");
        }
        inline app::FixedUpdate_DirectorFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_DirectorFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_DirectorFixedUpdate__Boxed* box(app::FixedUpdate_DirectorFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_DirectorFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_DirectorFixedUpdate
} // namespace app::classes::types
