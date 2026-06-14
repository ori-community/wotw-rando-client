#pragma once
#include <Modloader/app/structs/VisibleReflectionProbe__Array.h>
#include <Modloader/app/structs/VisibleReflectionProbe__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VisibleReflectionProbe__Array {
        inline app::VisibleReflectionProbe__Array__Class** type_info() {
            static app::VisibleReflectionProbe__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VisibleReflectionProbe__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VisibleReflectionProbe__Array__Class* get_class() {
            return il2cpp::get_class<app::VisibleReflectionProbe__Array__Class>(type_info(), "UnityEngine.Experimental.Rendering", "VisibleReflectionProbe[]");
        }
        inline app::VisibleReflectionProbe__Array* create() {
            return il2cpp::create_object<app::VisibleReflectionProbe__Array>(get_class());
        }
    } // namespace VisibleReflectionProbe__Array
} // namespace app::classes::types
