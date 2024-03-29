#pragma once
#include <Modloader/app/structs/SpiderBatRestingToAttackingBehaviour.h>
#include <Modloader/app/structs/SpiderBatRestingToAttackingBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatRestingToAttackingBehaviour {
        inline app::SpiderBatRestingToAttackingBehaviour__Class** type_info() {
            static app::SpiderBatRestingToAttackingBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatRestingToAttackingBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatRestingToAttackingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatRestingToAttackingBehaviour__Class>(type_info(), "", "SpiderBatRestingToAttackingBehaviour");
        }
        inline app::SpiderBatRestingToAttackingBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatRestingToAttackingBehaviour>(get_class());
        }
    } // namespace SpiderBatRestingToAttackingBehaviour
} // namespace app::classes::types
