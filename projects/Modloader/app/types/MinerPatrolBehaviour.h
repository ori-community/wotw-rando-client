#pragma once
#include <Modloader/app/structs/MinerPatrolBehaviour.h>
#include <Modloader/app/structs/MinerPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerPatrolBehaviour {
        inline app::MinerPatrolBehaviour__Class** type_info() {
            static app::MinerPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerPatrolBehaviour__Class>(type_info(), "", "MinerPatrolBehaviour");
        }
        inline app::MinerPatrolBehaviour* create() {
            return il2cpp::create_object<app::MinerPatrolBehaviour>(get_class());
        }
    } // namespace MinerPatrolBehaviour
} // namespace app::classes::types
