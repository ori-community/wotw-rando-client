#pragma once
#include <Modloader/app/structs/HornBugBossActivate.h>
#include <Modloader/app/structs/HornBugBossActivate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugBossActivate {
        inline app::HornBugBossActivate__Class** type_info() {
            static app::HornBugBossActivate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugBossActivate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugBossActivate__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossActivate__Class>(type_info(), "", "HornBugBossActivate");
        }
        inline app::HornBugBossActivate* create() {
            return il2cpp::create_object<app::HornBugBossActivate>(get_class());
        }
    } // namespace HornBugBossActivate
} // namespace app::classes::types
