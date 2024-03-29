#pragma once
#include <Modloader/app/structs/EVREventType__Enum.h>
#include <Modloader/app/structs/EVREventType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVREventType__Enum {
        inline app::EVREventType__Enum__Class** type_info() {
            static app::EVREventType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVREventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472C640));
            }
            return cache;
        }
        inline app::EVREventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVREventType__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVREventType");
        }
        inline app::EVREventType__Enum* create() {
            return il2cpp::create_object<app::EVREventType__Enum>(get_class());
        }
    } // namespace EVREventType__Enum
} // namespace app::classes::types
