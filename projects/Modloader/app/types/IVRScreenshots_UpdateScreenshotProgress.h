#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRScreenshots_UpdateScreenshotProgress {
        inline app::IVRScreenshots_UpdateScreenshotProgress__Class** type_info = (app::IVRScreenshots_UpdateScreenshotProgress__Class**)(modloader::win::memory::resolve_rva(0x0470F7C8));
        inline app::IVRScreenshots_UpdateScreenshotProgress__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_UpdateScreenshotProgress__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_UpdateScreenshotProgress");
        }
        inline app::IVRScreenshots_UpdateScreenshotProgress* create() {
            return il2cpp::create_object<app::IVRScreenshots_UpdateScreenshotProgress>(get_class());
        }
    } // namespace IVRScreenshots_UpdateScreenshotProgress
} // namespace app::classes::types
