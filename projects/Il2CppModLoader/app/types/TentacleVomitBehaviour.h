#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleVomitBehaviour {
        namespace {
            app::TentacleVomitBehaviour__Class* type_info_ref = nullptr;
        }
        app::TentacleVomitBehaviour__Class** type_info = &type_info_ref;
        inline app::TentacleVomitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleVomitBehaviour__Class>(type_info, "Moon", "TentacleVomitBehaviour");
        }
        inline app::TentacleVomitBehaviour* create() {
            return il2cpp::create_object<app::TentacleVomitBehaviour>(get_class());
        }
    } // namespace TentacleVomitBehaviour
} // namespace app::classes::types
