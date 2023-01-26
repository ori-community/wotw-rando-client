#pragma once
#include <Modloader/app/structs/HornBugBossRollBackBehaviour_new.h>
#include <Modloader/app/structs/HornBugBossRollBackBehaviour_new__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugBossRollBackBehaviour_new {
        inline app::HornBugBossRollBackBehaviour_new__Class** type_info() {
            static app::HornBugBossRollBackBehaviour_new__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugBossRollBackBehaviour_new__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugBossRollBackBehaviour_new__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossRollBackBehaviour_new__Class>(type_info(), "", "HornBugBossRollBackBehaviour_new");
        }
        inline app::HornBugBossRollBackBehaviour_new* create() {
            return il2cpp::create_object<app::HornBugBossRollBackBehaviour_new>(get_class());
        }
    } // namespace HornBugBossRollBackBehaviour_new
} // namespace app::classes::types
