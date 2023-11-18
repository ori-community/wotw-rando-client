#pragma once
#include <Modloader/app/structs/InteractionTrigger_CameraPosition.h>
#include <Modloader/app/structs/InteractionTrigger_CameraPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTrigger_CameraPosition {
        inline app::InteractionTrigger_CameraPosition__Class** type_info() {
            static app::InteractionTrigger_CameraPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionTrigger_CameraPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionTrigger_CameraPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionTrigger_CameraPosition__Class>(type_info(), "RootMotion.FinalIK", "InteractionTrigger", "CameraPosition");
        }
        inline app::InteractionTrigger_CameraPosition* create() {
            return il2cpp::create_object<app::InteractionTrigger_CameraPosition>(get_class());
        }
    } // namespace InteractionTrigger_CameraPosition
} // namespace app::classes::types
