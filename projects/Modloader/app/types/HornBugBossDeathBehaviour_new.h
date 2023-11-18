#pragma once
#include <Modloader/app/structs/HornBugBossDeathBehaviour_new.h>
#include <Modloader/app/structs/HornBugBossDeathBehaviour_new__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugBossDeathBehaviour_new {
        inline app::HornBugBossDeathBehaviour_new__Class** type_info() {
            static app::HornBugBossDeathBehaviour_new__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugBossDeathBehaviour_new__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugBossDeathBehaviour_new__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossDeathBehaviour_new__Class>(type_info(), "", "HornBugBossDeathBehaviour_new");
        }
        inline app::HornBugBossDeathBehaviour_new* create() {
            return il2cpp::create_object<app::HornBugBossDeathBehaviour_new>(get_class());
        }
    } // namespace HornBugBossDeathBehaviour_new
} // namespace app::classes::types
