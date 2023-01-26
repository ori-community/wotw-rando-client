#pragma once
#include <Modloader/app/structs/EVRControllerAxisType__Enum.h>
#include <Modloader/app/structs/EVRControllerAxisType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRControllerAxisType__Enum {
        inline app::EVRControllerAxisType__Enum__Class** type_info() {
            static app::EVRControllerAxisType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRControllerAxisType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047703F0));
            }
            return cache;
        }
        inline app::EVRControllerAxisType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRControllerAxisType__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRControllerAxisType");
        }
        inline app::EVRControllerAxisType__Enum* create() {
            return il2cpp::create_object<app::EVRControllerAxisType__Enum>(get_class());
        }
    } // namespace EVRControllerAxisType__Enum
} // namespace app::classes::types
