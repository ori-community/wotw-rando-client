#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossEntity.h>
#include <Modloader/app/structs/PetrifiedOwlBossEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEntity {
        inline app::PetrifiedOwlBossEntity__Class** type_info() {
            static app::PetrifiedOwlBossEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossEntity__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossEntity__Class>(type_info(), "", "PetrifiedOwlBossEntity");
        }
        inline app::PetrifiedOwlBossEntity* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEntity>(get_class());
        }
    } // namespace PetrifiedOwlBossEntity
} // namespace app::classes::types
