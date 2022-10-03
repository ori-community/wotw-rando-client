#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurningBehaviour {
        namespace {
            app::TurningBehaviour__Class* type_info_ref = nullptr;
        }
        app::TurningBehaviour__Class** type_info = &type_info_ref;
        inline app::TurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurningBehaviour__Class>(type_info, "Moon", "TurningBehaviour");
        }
        inline app::TurningBehaviour* create() {
            return il2cpp::create_object<app::TurningBehaviour>(get_class());
        }
    } // namespace TurningBehaviour
} // namespace app::classes::types
