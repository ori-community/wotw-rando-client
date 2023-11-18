#pragma once
#include <Modloader/app/structs/VRMessageOverlayResponse__Enum.h>
#include <Modloader/app/structs/VRMessageOverlayResponse__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRMessageOverlayResponse__Enum {
        inline app::VRMessageOverlayResponse__Enum__Class** type_info() {
            static app::VRMessageOverlayResponse__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VRMessageOverlayResponse__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VRMessageOverlayResponse__Enum__Class* get_class() {
            return il2cpp::get_class<app::VRMessageOverlayResponse__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VRMessageOverlayResponse");
        }
        inline app::VRMessageOverlayResponse__Enum* create() {
            return il2cpp::create_object<app::VRMessageOverlayResponse__Enum>(get_class());
        }
    } // namespace VRMessageOverlayResponse__Enum
} // namespace app::classes::types
