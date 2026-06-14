#pragma once
#include <Modloader/app/structs/IsSelectedSlotEmptyCondition.h>
#include <Modloader/app/structs/IsSelectedSlotEmptyCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsSelectedSlotEmptyCondition {
        inline app::IsSelectedSlotEmptyCondition__Class** type_info() {
            static app::IsSelectedSlotEmptyCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsSelectedSlotEmptyCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsSelectedSlotEmptyCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSelectedSlotEmptyCondition__Class>(type_info(), "", "IsSelectedSlotEmptyCondition");
        }
        inline app::IsSelectedSlotEmptyCondition* create() {
            return il2cpp::create_object<app::IsSelectedSlotEmptyCondition>(get_class());
        }
    } // namespace IsSelectedSlotEmptyCondition
} // namespace app::classes::types
