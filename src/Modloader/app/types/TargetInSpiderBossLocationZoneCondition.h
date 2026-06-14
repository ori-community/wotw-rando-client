#pragma once
#include <Modloader/app/structs/TargetInSpiderBossLocationZoneCondition.h>
#include <Modloader/app/structs/TargetInSpiderBossLocationZoneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetInSpiderBossLocationZoneCondition {
        inline app::TargetInSpiderBossLocationZoneCondition__Class** type_info() {
            static app::TargetInSpiderBossLocationZoneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetInSpiderBossLocationZoneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetInSpiderBossLocationZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::TargetInSpiderBossLocationZoneCondition__Class>(type_info(), "", "TargetInSpiderBossLocationZoneCondition");
        }
        inline app::TargetInSpiderBossLocationZoneCondition* create() {
            return il2cpp::create_object<app::TargetInSpiderBossLocationZoneCondition>(get_class());
        }
    } // namespace TargetInSpiderBossLocationZoneCondition
} // namespace app::classes::types
