#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PickupCameraTarget__Class.h>
#include <Modloader/app/structs/PickupCameraTarget.h>

namespace app::classes::types {
    namespace PickupCameraTarget {
        namespace {
            inline app::PickupCameraTarget__Class* type_info_ref = nullptr;
        }
        inline app::PickupCameraTarget__Class** type_info = &type_info_ref;
        inline app::PickupCameraTarget__Class* get_class() {
            return il2cpp::get_class<app::PickupCameraTarget__Class>(type_info, "", "PickupCameraTarget");
        }
        inline app::PickupCameraTarget* create() {
            return il2cpp::create_object<app::PickupCameraTarget>(get_class());
        }
    } // namespace PickupCameraTarget
} // namespace app::classes::types
