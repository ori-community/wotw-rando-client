#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MirroredTurningBehaviour {
        namespace {
            app::MirroredTurningBehaviour__Class* type_info_ref = nullptr;
        }
        app::MirroredTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::MirroredTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MirroredTurningBehaviour__Class>(type_info, "Moon", "MirroredTurningBehaviour");
        }
        inline app::MirroredTurningBehaviour* create() {
            return il2cpp::create_object<app::MirroredTurningBehaviour>(get_class());
        }
    } // namespace MirroredTurningBehaviour
} // namespace app::classes::types
