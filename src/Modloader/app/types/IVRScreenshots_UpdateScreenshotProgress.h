#pragma once
#include <Modloader/app/structs/IVRScreenshots_UpdateScreenshotProgress.h>
#include <Modloader/app/structs/IVRScreenshots_UpdateScreenshotProgress__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_UpdateScreenshotProgress {
        inline app::IVRScreenshots_UpdateScreenshotProgress__Class** type_info() {
            static app::IVRScreenshots_UpdateScreenshotProgress__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRScreenshots_UpdateScreenshotProgress__Class**)(modloader::win::memory::resolve_rva(0x0470F7C8));
            }
            return cache;
        }
        inline app::IVRScreenshots_UpdateScreenshotProgress__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_UpdateScreenshotProgress__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_UpdateScreenshotProgress");
        }
        inline app::IVRScreenshots_UpdateScreenshotProgress* create() {
            return il2cpp::create_object<app::IVRScreenshots_UpdateScreenshotProgress>(get_class());
        }
    } // namespace IVRScreenshots_UpdateScreenshotProgress
} // namespace app::classes::types
