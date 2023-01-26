#pragma once
#include <Modloader/app/structs/IVRScreenshots_GetScreenshotPropertyFilename.h>
#include <Modloader/app/structs/IVRScreenshots_GetScreenshotPropertyFilename__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_GetScreenshotPropertyFilename {
        inline app::IVRScreenshots_GetScreenshotPropertyFilename__Class** type_info() {
            static app::IVRScreenshots_GetScreenshotPropertyFilename__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRScreenshots_GetScreenshotPropertyFilename__Class**)(modloader::win::memory::resolve_rva(0x0477A588));
            }
            return cache;
        }
        inline app::IVRScreenshots_GetScreenshotPropertyFilename__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_GetScreenshotPropertyFilename__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_GetScreenshotPropertyFilename");
        }
        inline app::IVRScreenshots_GetScreenshotPropertyFilename* create() {
            return il2cpp::create_object<app::IVRScreenshots_GetScreenshotPropertyFilename>(get_class());
        }
    } // namespace IVRScreenshots_GetScreenshotPropertyFilename
} // namespace app::classes::types
