#pragma once
#include <Modloader/app/structs/TriggerBasedRubberBandingSet.h>
#include <Modloader/app/structs/TriggerBasedRubberBandingSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerBasedRubberBandingSet {
        inline app::TriggerBasedRubberBandingSet__Class** type_info() {
            static app::TriggerBasedRubberBandingSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerBasedRubberBandingSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerBasedRubberBandingSet__Class* get_class() {
            return il2cpp::get_class<app::TriggerBasedRubberBandingSet__Class>(type_info(), "", "TriggerBasedRubberBandingSet");
        }
        inline app::TriggerBasedRubberBandingSet* create() {
            return il2cpp::create_object<app::TriggerBasedRubberBandingSet>(get_class());
        }
    } // namespace TriggerBasedRubberBandingSet
} // namespace app::classes::types
