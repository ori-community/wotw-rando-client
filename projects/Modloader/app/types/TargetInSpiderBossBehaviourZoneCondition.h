#pragma once
#include <Modloader/app/structs/TargetInSpiderBossBehaviourZoneCondition.h>
#include <Modloader/app/structs/TargetInSpiderBossBehaviourZoneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetInSpiderBossBehaviourZoneCondition {
        inline app::TargetInSpiderBossBehaviourZoneCondition__Class** type_info() {
            static app::TargetInSpiderBossBehaviourZoneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetInSpiderBossBehaviourZoneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetInSpiderBossBehaviourZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::TargetInSpiderBossBehaviourZoneCondition__Class>(type_info(), "", "TargetInSpiderBossBehaviourZoneCondition");
        }
        inline app::TargetInSpiderBossBehaviourZoneCondition* create() {
            return il2cpp::create_object<app::TargetInSpiderBossBehaviourZoneCondition>(get_class());
        }
    } // namespace TargetInSpiderBossBehaviourZoneCondition
} // namespace app::classes::types
