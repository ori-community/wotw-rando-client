#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugBossDeathBehaviour_new {
        namespace {
            app::HornBugBossDeathBehaviour_new__Class* type_info_ref = nullptr;
        }
        app::HornBugBossDeathBehaviour_new__Class** type_info = &type_info_ref;
        inline app::HornBugBossDeathBehaviour_new__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossDeathBehaviour_new__Class>(type_info, "", "HornBugBossDeathBehaviour_new");
        }
        inline app::HornBugBossDeathBehaviour_new* create() {
            return il2cpp::create_object<app::HornBugBossDeathBehaviour_new>(get_class());
        }
    } // namespace HornBugBossDeathBehaviour_new
} // namespace app::classes::types
