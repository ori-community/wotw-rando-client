#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererPatrolBehaviour {
        namespace {
            app::WandererPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        app::WandererPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPatrolBehaviour__Class>(type_info, "Moon", "WandererPatrolBehaviour");
        }
        inline app::WandererPatrolBehaviour* create() {
            return il2cpp::create_object<app::WandererPatrolBehaviour>(get_class());
        }
    } // namespace WandererPatrolBehaviour
} // namespace app::classes::types
