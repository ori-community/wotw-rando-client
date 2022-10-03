#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionIdleEntryBehaviour {
        namespace {
            app::LocomotionIdleEntryBehaviour__Class* type_info_ref = nullptr;
        }
        app::LocomotionIdleEntryBehaviour__Class** type_info = &type_info_ref;
        inline app::LocomotionIdleEntryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionIdleEntryBehaviour__Class>(type_info, "", "LocomotionIdleEntryBehaviour");
        }
        inline app::LocomotionIdleEntryBehaviour* create() {
            return il2cpp::create_object<app::LocomotionIdleEntryBehaviour>(get_class());
        }
    } // namespace LocomotionIdleEntryBehaviour
} // namespace app::classes::types
