#pragma once
#include <Modloader/app/structs/OriInterestTriggerB.h>
#include <Modloader/app/structs/OriInterestTriggerB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriInterestTriggerB {
        inline app::OriInterestTriggerB__Class** type_info() {
            static app::OriInterestTriggerB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriInterestTriggerB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriInterestTriggerB__Class* get_class() {
            return il2cpp::get_class<app::OriInterestTriggerB__Class>(type_info(), "", "OriInterestTriggerB");
        }
        inline app::OriInterestTriggerB* create() {
            return il2cpp::create_object<app::OriInterestTriggerB>(get_class());
        }
    } // namespace OriInterestTriggerB
} // namespace app::classes::types
