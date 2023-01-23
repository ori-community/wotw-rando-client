#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_IsDisplayOnDesktop__Class.h>
#include <Modloader/app/structs/IVRSystem_IsDisplayOnDesktop.h>

namespace app::classes::types {
    namespace IVRSystem_IsDisplayOnDesktop {
        inline app::IVRSystem_IsDisplayOnDesktop__Class** type_info = (app::IVRSystem_IsDisplayOnDesktop__Class**)(modloader::win::memory::resolve_rva(0x04764AE0));
        inline app::IVRSystem_IsDisplayOnDesktop__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_IsDisplayOnDesktop__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_IsDisplayOnDesktop");
        }
        inline app::IVRSystem_IsDisplayOnDesktop* create() {
            return il2cpp::create_object<app::IVRSystem_IsDisplayOnDesktop>(get_class());
        }
    } // namespace IVRSystem_IsDisplayOnDesktop
} // namespace app::classes::types
