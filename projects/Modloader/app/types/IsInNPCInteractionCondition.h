#pragma once
#include <Modloader/app/structs/IsInNPCInteractionCondition.h>
#include <Modloader/app/structs/IsInNPCInteractionCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsInNPCInteractionCondition {
        inline app::IsInNPCInteractionCondition__Class** type_info() {
            static app::IsInNPCInteractionCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsInNPCInteractionCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsInNPCInteractionCondition__Class* get_class() {
            return il2cpp::get_class<app::IsInNPCInteractionCondition__Class>(type_info(), "", "IsInNPCInteractionCondition");
        }
        inline app::IsInNPCInteractionCondition* create() {
            return il2cpp::create_object<app::IsInNPCInteractionCondition>(get_class());
        }
    } // namespace IsInNPCInteractionCondition
} // namespace app::classes::types
