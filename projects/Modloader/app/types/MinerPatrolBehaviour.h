#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerPatrolBehaviour {
        namespace {
            inline app::MinerPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MinerPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerPatrolBehaviour__Class>(type_info, "", "MinerPatrolBehaviour");
        }
        inline app::MinerPatrolBehaviour* create() {
            return il2cpp::create_object<app::MinerPatrolBehaviour>(get_class());
        }
    } // namespace MinerPatrolBehaviour
} // namespace app::classes::types
