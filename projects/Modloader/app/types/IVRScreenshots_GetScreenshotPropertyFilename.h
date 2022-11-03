#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRScreenshots_GetScreenshotPropertyFilename {
        inline app::IVRScreenshots_GetScreenshotPropertyFilename__Class** type_info = (app::IVRScreenshots_GetScreenshotPropertyFilename__Class**)(modloader::win::memory::resolve_rva(0x0477A588));
        inline app::IVRScreenshots_GetScreenshotPropertyFilename__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_GetScreenshotPropertyFilename__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_GetScreenshotPropertyFilename");
        }
        inline app::IVRScreenshots_GetScreenshotPropertyFilename* create() {
            return il2cpp::create_object<app::IVRScreenshots_GetScreenshotPropertyFilename>(get_class());
        }
    } // namespace IVRScreenshots_GetScreenshotPropertyFilename
} // namespace app::classes::types
