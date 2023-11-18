#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateSubstance.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateSubstance__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateSubstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateSubstance {
        inline app::PostLateUpdate_UpdateSubstance__Class** type_info() {
            static app::PostLateUpdate_UpdateSubstance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateSubstance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateSubstance__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateSubstance__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateSubstance");
        }
        inline app::PostLateUpdate_UpdateSubstance* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateSubstance>(get_class());
        }
        inline app::PostLateUpdate_UpdateSubstance__Boxed* box(app::PostLateUpdate_UpdateSubstance value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateSubstance__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateSubstance
} // namespace app::classes::types
