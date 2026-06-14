#pragma once
#include <Modloader/app/structs/PostLateUpdate_DirectorLateUpdate.h>
#include <Modloader/app/structs/PostLateUpdate_DirectorLateUpdate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_DirectorLateUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_DirectorLateUpdate {
        inline app::PostLateUpdate_DirectorLateUpdate__Class** type_info() {
            static app::PostLateUpdate_DirectorLateUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_DirectorLateUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_DirectorLateUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_DirectorLateUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "DirectorLateUpdate");
        }
        inline app::PostLateUpdate_DirectorLateUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_DirectorLateUpdate>(get_class());
        }
        inline app::PostLateUpdate_DirectorLateUpdate__Boxed* box(app::PostLateUpdate_DirectorLateUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_DirectorLateUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_DirectorLateUpdate
} // namespace app::classes::types
