#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VisibleReflectionProbe__Array {
        namespace {
            app::VisibleReflectionProbe__Array__Class* type_info_ref = nullptr;
        }
        app::VisibleReflectionProbe__Array__Class** type_info = &type_info_ref;
        inline app::VisibleReflectionProbe__Array__Class* get_class() {
            return il2cpp::get_class<app::VisibleReflectionProbe__Array__Class>(type_info, "UnityEngine.Experimental.Rendering", "VisibleReflectionProbe[]");
        }
        inline app::VisibleReflectionProbe__Array* create() {
            return il2cpp::create_object<app::VisibleReflectionProbe__Array>(get_class());
        }
    } // namespace VisibleReflectionProbe__Array
} // namespace app::classes::types
