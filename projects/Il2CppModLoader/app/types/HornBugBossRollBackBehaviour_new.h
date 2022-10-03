#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugBossRollBackBehaviour_new {
        namespace {
            app::HornBugBossRollBackBehaviour_new__Class* type_info_ref = nullptr;
        }
        app::HornBugBossRollBackBehaviour_new__Class** type_info = &type_info_ref;
        inline app::HornBugBossRollBackBehaviour_new__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossRollBackBehaviour_new__Class>(type_info, "", "HornBugBossRollBackBehaviour_new");
        }
        inline app::HornBugBossRollBackBehaviour_new* create() {
            return il2cpp::create_object<app::HornBugBossRollBackBehaviour_new>(get_class());
        }
    } // namespace HornBugBossRollBackBehaviour_new
} // namespace app::classes::types
