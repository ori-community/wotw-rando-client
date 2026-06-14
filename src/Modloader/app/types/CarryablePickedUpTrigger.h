#pragma once
#include <Modloader/app/structs/CarryablePickedUpTrigger.h>
#include <Modloader/app/structs/CarryablePickedUpTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CarryablePickedUpTrigger {
        inline app::CarryablePickedUpTrigger__Class** type_info() {
            static app::CarryablePickedUpTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CarryablePickedUpTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CarryablePickedUpTrigger__Class* get_class() {
            return il2cpp::get_class<app::CarryablePickedUpTrigger__Class>(type_info(), "", "CarryablePickedUpTrigger");
        }
        inline app::CarryablePickedUpTrigger* create() {
            return il2cpp::create_object<app::CarryablePickedUpTrigger>(get_class());
        }
    } // namespace CarryablePickedUpTrigger
} // namespace app::classes::types
