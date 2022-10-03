#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerBuilderTurningBehaviour {
        namespace {
            app::MinerBuilderTurningBehaviour__Class* type_info_ref = nullptr;
        }
        app::MinerBuilderTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerBuilderTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderTurningBehaviour__Class>(type_info, "Moon", "MinerBuilderTurningBehaviour");
        }
        inline app::MinerBuilderTurningBehaviour* create() {
            return il2cpp::create_object<app::MinerBuilderTurningBehaviour>(get_class());
        }
    } // namespace MinerBuilderTurningBehaviour
} // namespace app::classes::types
