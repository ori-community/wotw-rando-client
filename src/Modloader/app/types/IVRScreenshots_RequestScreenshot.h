#pragma once
#include <Modloader/app/structs/IVRScreenshots_RequestScreenshot.h>
#include <Modloader/app/structs/IVRScreenshots_RequestScreenshot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_RequestScreenshot {
        inline app::IVRScreenshots_RequestScreenshot__Class** type_info() {
            static app::IVRScreenshots_RequestScreenshot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRScreenshots_RequestScreenshot__Class**)(modloader::win::memory::resolve_rva(0x047971E8));
            }
            return cache;
        }
        inline app::IVRScreenshots_RequestScreenshot__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_RequestScreenshot__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_RequestScreenshot");
        }
        inline app::IVRScreenshots_RequestScreenshot* create() {
            return il2cpp::create_object<app::IVRScreenshots_RequestScreenshot>(get_class());
        }
    } // namespace IVRScreenshots_RequestScreenshot
} // namespace app::classes::types
