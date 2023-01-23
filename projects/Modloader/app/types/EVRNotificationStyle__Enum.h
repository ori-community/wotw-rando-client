#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EVRNotificationStyle__Enum__Class.h>
#include <Modloader/app/structs/EVRNotificationStyle__Enum.h>

namespace app::classes::types {
    namespace EVRNotificationStyle__Enum {
        inline app::EVRNotificationStyle__Enum__Class** type_info = (app::EVRNotificationStyle__Enum__Class**)(modloader::win::memory::resolve_rva(0x04745AA0));
        inline app::EVRNotificationStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRNotificationStyle__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRNotificationStyle");
        }
        inline app::EVRNotificationStyle__Enum* create() {
            return il2cpp::create_object<app::EVRNotificationStyle__Enum>(get_class());
        }
    } // namespace EVRNotificationStyle__Enum
} // namespace app::classes::types
