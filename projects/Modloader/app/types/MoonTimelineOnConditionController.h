#pragma once
#include <Modloader/app/structs/MoonTimelineOnConditionController.h>
#include <Modloader/app/structs/MoonTimelineOnConditionController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTimelineOnConditionController {
        inline app::MoonTimelineOnConditionController__Class** type_info() {
            static app::MoonTimelineOnConditionController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTimelineOnConditionController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTimelineOnConditionController__Class* get_class() {
            return il2cpp::get_class<app::MoonTimelineOnConditionController__Class>(type_info(), "", "MoonTimelineOnConditionController");
        }
        inline app::MoonTimelineOnConditionController* create() {
            return il2cpp::create_object<app::MoonTimelineOnConditionController>(get_class());
        }
    } // namespace MoonTimelineOnConditionController
} // namespace app::classes::types
