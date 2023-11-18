#pragma once
#include <Modloader/app/structs/EVRNotificationType__Enum.h>
#include <Modloader/app/structs/EVRNotificationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRNotificationType__Enum {
        inline app::EVRNotificationType__Enum__Class** type_info() {
            static app::EVRNotificationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRNotificationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474D980));
            }
            return cache;
        }
        inline app::EVRNotificationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRNotificationType__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRNotificationType");
        }
        inline app::EVRNotificationType__Enum* create() {
            return il2cpp::create_object<app::EVRNotificationType__Enum>(get_class());
        }
    } // namespace EVRNotificationType__Enum
} // namespace app::classes::types
