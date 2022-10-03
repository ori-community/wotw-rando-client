#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetInSpiderBossBehaviourZoneCondition {
        namespace {
            app::TargetInSpiderBossBehaviourZoneCondition__Class* type_info_ref = nullptr;
        }
        app::TargetInSpiderBossBehaviourZoneCondition__Class** type_info = &type_info_ref;
        inline app::TargetInSpiderBossBehaviourZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::TargetInSpiderBossBehaviourZoneCondition__Class>(type_info, "", "TargetInSpiderBossBehaviourZoneCondition");
        }
        inline app::TargetInSpiderBossBehaviourZoneCondition* create() {
            return il2cpp::create_object<app::TargetInSpiderBossBehaviourZoneCondition>(get_class());
        }
    } // namespace TargetInSpiderBossBehaviourZoneCondition
} // namespace app::classes::types
