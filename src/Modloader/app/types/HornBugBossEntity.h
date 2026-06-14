#pragma once
#include <Modloader/app/structs/HornBugBossEntity.h>
#include <Modloader/app/structs/HornBugBossEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugBossEntity {
        inline app::HornBugBossEntity__Class** type_info() {
            static app::HornBugBossEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugBossEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugBossEntity__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossEntity__Class>(type_info(), "", "HornBugBossEntity");
        }
        inline app::HornBugBossEntity* create() {
            return il2cpp::create_object<app::HornBugBossEntity>(get_class());
        }
    } // namespace HornBugBossEntity
} // namespace app::classes::types
