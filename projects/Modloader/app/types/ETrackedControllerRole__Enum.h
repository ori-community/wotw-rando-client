#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ETrackedControllerRole__Enum__Class.h>
#include <Modloader/app/structs/ETrackedControllerRole__Enum.h>

namespace app::classes::types {
    namespace ETrackedControllerRole__Enum {
        inline app::ETrackedControllerRole__Enum__Class** type_info = (app::ETrackedControllerRole__Enum__Class**)(modloader::win::memory::resolve_rva(0x04722158));
        inline app::ETrackedControllerRole__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackedControllerRole__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackedControllerRole");
        }
        inline app::ETrackedControllerRole__Enum* create() {
            return il2cpp::create_object<app::ETrackedControllerRole__Enum>(get_class());
        }
    } // namespace ETrackedControllerRole__Enum
} // namespace app::classes::types
