#pragma once
#include <Modloader/app/structs/IVRSystem_IsDisplayOnDesktop.h>
#include <Modloader/app/structs/IVRSystem_IsDisplayOnDesktop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_IsDisplayOnDesktop {
        inline app::IVRSystem_IsDisplayOnDesktop__Class** type_info() {
            static app::IVRSystem_IsDisplayOnDesktop__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_IsDisplayOnDesktop__Class**)(modloader::win::memory::resolve_rva(0x04764AE0));
            }
            return cache;
        }
        inline app::IVRSystem_IsDisplayOnDesktop__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_IsDisplayOnDesktop__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_IsDisplayOnDesktop");
        }
        inline app::IVRSystem_IsDisplayOnDesktop* create() {
            return il2cpp::create_object<app::IVRSystem_IsDisplayOnDesktop>(get_class());
        }
    } // namespace IVRSystem_IsDisplayOnDesktop
} // namespace app::classes::types
