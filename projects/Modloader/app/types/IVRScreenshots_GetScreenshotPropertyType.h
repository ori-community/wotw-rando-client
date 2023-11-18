#pragma once
#include <Modloader/app/structs/IVRScreenshots_GetScreenshotPropertyType.h>
#include <Modloader/app/structs/IVRScreenshots_GetScreenshotPropertyType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_GetScreenshotPropertyType {
        inline app::IVRScreenshots_GetScreenshotPropertyType__Class** type_info() {
            static app::IVRScreenshots_GetScreenshotPropertyType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRScreenshots_GetScreenshotPropertyType__Class**)(modloader::win::memory::resolve_rva(0x04765538));
            }
            return cache;
        }
        inline app::IVRScreenshots_GetScreenshotPropertyType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_GetScreenshotPropertyType__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_GetScreenshotPropertyType");
        }
        inline app::IVRScreenshots_GetScreenshotPropertyType* create() {
            return il2cpp::create_object<app::IVRScreenshots_GetScreenshotPropertyType>(get_class());
        }
    } // namespace IVRScreenshots_GetScreenshotPropertyType
} // namespace app::classes::types
