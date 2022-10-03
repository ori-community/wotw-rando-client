#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicMirrorTurningBehaviour {
        namespace {
            app::DynamicMirrorTurningBehaviour__Class* type_info_ref = nullptr;
        }
        app::DynamicMirrorTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::DynamicMirrorTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DynamicMirrorTurningBehaviour__Class>(type_info, "Moon", "DynamicMirrorTurningBehaviour");
        }
        inline app::DynamicMirrorTurningBehaviour* create() {
            return il2cpp::create_object<app::DynamicMirrorTurningBehaviour>(get_class());
        }
    } // namespace DynamicMirrorTurningBehaviour
} // namespace app::classes::types
