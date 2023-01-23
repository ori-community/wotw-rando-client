#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSystem_CaptureInputFocus__Class.h>
#include <Modloader/app/structs/IVRSystem_CaptureInputFocus.h>

namespace app::classes::types {
    namespace IVRSystem_CaptureInputFocus {
        inline app::IVRSystem_CaptureInputFocus__Class** type_info = (app::IVRSystem_CaptureInputFocus__Class**)(modloader::win::memory::resolve_rva(0x04796DA0));
        inline app::IVRSystem_CaptureInputFocus__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_CaptureInputFocus__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_CaptureInputFocus");
        }
        inline app::IVRSystem_CaptureInputFocus* create() {
            return il2cpp::create_object<app::IVRSystem_CaptureInputFocus>(get_class());
        }
    } // namespace IVRSystem_CaptureInputFocus
} // namespace app::classes::types
