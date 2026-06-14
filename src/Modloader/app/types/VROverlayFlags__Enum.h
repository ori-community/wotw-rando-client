#pragma once
#include <Modloader/app/structs/VROverlayFlags__Enum.h>
#include <Modloader/app/structs/VROverlayFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VROverlayFlags__Enum {
        inline app::VROverlayFlags__Enum__Class** type_info() {
            static app::VROverlayFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VROverlayFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x047551C8));
            }
            return cache;
        }
        inline app::VROverlayFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::VROverlayFlags__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VROverlayFlags");
        }
        inline app::VROverlayFlags__Enum* create() {
            return il2cpp::create_object<app::VROverlayFlags__Enum>(get_class());
        }
    } // namespace VROverlayFlags__Enum
} // namespace app::classes::types
