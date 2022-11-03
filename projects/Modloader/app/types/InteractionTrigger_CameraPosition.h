#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionTrigger_CameraPosition {
        namespace {
            inline app::InteractionTrigger_CameraPosition__Class* type_info_ref = nullptr;
        }
        inline app::InteractionTrigger_CameraPosition__Class** type_info = &type_info_ref;
        inline app::InteractionTrigger_CameraPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionTrigger_CameraPosition__Class>(type_info, "RootMotion.FinalIK", "InteractionTrigger", "CameraPosition");
        }
        inline app::InteractionTrigger_CameraPosition* create() {
            return il2cpp::create_object<app::InteractionTrigger_CameraPosition>(get_class());
        }
    } // namespace InteractionTrigger_CameraPosition
} // namespace app::classes::types
