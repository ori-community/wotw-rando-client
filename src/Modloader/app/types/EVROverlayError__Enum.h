#pragma once
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/EVROverlayError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVROverlayError__Enum {
        inline app::EVROverlayError__Enum__Class** type_info() {
            static app::EVROverlayError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVROverlayError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047628C0));
            }
            return cache;
        }
        inline app::EVROverlayError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVROverlayError__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVROverlayError");
        }
        inline app::EVROverlayError__Enum* create() {
            return il2cpp::create_object<app::EVROverlayError__Enum>(get_class());
        }
    } // namespace EVROverlayError__Enum
} // namespace app::classes::types
