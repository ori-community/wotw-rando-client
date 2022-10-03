#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleSpitBehaviour {
        namespace {
            app::TentacleSpitBehaviour__Class* type_info_ref = nullptr;
        }
        app::TentacleSpitBehaviour__Class** type_info = &type_info_ref;
        inline app::TentacleSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleSpitBehaviour__Class>(type_info, "Moon", "TentacleSpitBehaviour");
        }
        inline app::TentacleSpitBehaviour* create() {
            return il2cpp::create_object<app::TentacleSpitBehaviour>(get_class());
        }
    } // namespace TentacleSpitBehaviour
} // namespace app::classes::types
