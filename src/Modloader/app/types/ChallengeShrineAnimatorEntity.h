#pragma once
#include <Modloader/app/structs/ChallengeShrineAnimatorEntity.h>
#include <Modloader/app/structs/ChallengeShrineAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineAnimatorEntity {
        inline app::ChallengeShrineAnimatorEntity__Class** type_info() {
            static app::ChallengeShrineAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChallengeShrineAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChallengeShrineAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineAnimatorEntity__Class>(type_info(), "", "ChallengeShrineAnimatorEntity");
        }
        inline app::ChallengeShrineAnimatorEntity* create() {
            return il2cpp::create_object<app::ChallengeShrineAnimatorEntity>(get_class());
        }
    } // namespace ChallengeShrineAnimatorEntity
} // namespace app::classes::types
