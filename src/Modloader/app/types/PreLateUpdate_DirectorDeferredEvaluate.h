#pragma once
#include <Modloader/app/structs/PreLateUpdate_DirectorDeferredEvaluate.h>
#include <Modloader/app/structs/PreLateUpdate_DirectorDeferredEvaluate__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_DirectorDeferredEvaluate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_DirectorDeferredEvaluate {
        inline app::PreLateUpdate_DirectorDeferredEvaluate__Class** type_info() {
            static app::PreLateUpdate_DirectorDeferredEvaluate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_DirectorDeferredEvaluate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_DirectorDeferredEvaluate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_DirectorDeferredEvaluate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "DirectorDeferredEvaluate");
        }
        inline app::PreLateUpdate_DirectorDeferredEvaluate* create() {
            return il2cpp::create_object<app::PreLateUpdate_DirectorDeferredEvaluate>(get_class());
        }
        inline app::PreLateUpdate_DirectorDeferredEvaluate__Boxed* box(app::PreLateUpdate_DirectorDeferredEvaluate value) {
            return il2cpp::box_value<app::PreLateUpdate_DirectorDeferredEvaluate__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_DirectorDeferredEvaluate
} // namespace app::classes::types
