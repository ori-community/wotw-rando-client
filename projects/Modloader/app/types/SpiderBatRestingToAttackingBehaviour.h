#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBatRestingToAttackingBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBatRestingToAttackingBehaviour.h>

namespace app::classes::types {
    namespace SpiderBatRestingToAttackingBehaviour {
        namespace {
            inline app::SpiderBatRestingToAttackingBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatRestingToAttackingBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatRestingToAttackingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatRestingToAttackingBehaviour__Class>(type_info, "", "SpiderBatRestingToAttackingBehaviour");
        }
        inline app::SpiderBatRestingToAttackingBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatRestingToAttackingBehaviour>(get_class());
        }
    } // namespace SpiderBatRestingToAttackingBehaviour
} // namespace app::classes::types
