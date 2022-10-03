#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerPatrolBehaviour {
        namespace {
            app::MinerPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        app::MinerPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerPatrolBehaviour__Class>(type_info, "", "MinerPatrolBehaviour");
        }
        inline app::MinerPatrolBehaviour* create() {
            return il2cpp::create_object<app::MinerPatrolBehaviour>(get_class());
        }
    } // namespace MinerPatrolBehaviour
} // namespace app::classes::types
