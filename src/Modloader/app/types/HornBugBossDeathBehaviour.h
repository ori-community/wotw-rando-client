#pragma once
#include <Modloader/app/structs/HornBugBossDeathBehaviour.h>
#include <Modloader/app/structs/HornBugBossDeathBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugBossDeathBehaviour {
        inline app::HornBugBossDeathBehaviour__Class** type_info() {
            static app::HornBugBossDeathBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugBossDeathBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugBossDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossDeathBehaviour__Class>(type_info(), "", "HornBugBossDeathBehaviour");
        }
        inline app::HornBugBossDeathBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossDeathBehaviour>(get_class());
        }
    } // namespace HornBugBossDeathBehaviour
} // namespace app::classes::types
