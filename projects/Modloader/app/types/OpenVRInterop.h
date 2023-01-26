#pragma once
#include <Modloader/app/structs/OpenVRInterop.h>
#include <Modloader/app/structs/OpenVRInterop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpenVRInterop {
        inline app::OpenVRInterop__Class** type_info() {
            static app::OpenVRInterop__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OpenVRInterop__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OpenVRInterop__Class* get_class() {
            return il2cpp::get_class<app::OpenVRInterop__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "OpenVRInterop");
        }
        inline app::OpenVRInterop* create() {
            return il2cpp::create_object<app::OpenVRInterop>(get_class());
        }
    } // namespace OpenVRInterop
} // namespace app::classes::types
