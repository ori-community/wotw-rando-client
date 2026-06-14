#pragma once
#include <Modloader/app/structs/IVRScreenshots_SubmitScreenshot.h>
#include <Modloader/app/structs/IVRScreenshots_SubmitScreenshot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_SubmitScreenshot {
        inline app::IVRScreenshots_SubmitScreenshot__Class** type_info() {
            static app::IVRScreenshots_SubmitScreenshot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRScreenshots_SubmitScreenshot__Class**)(modloader::win::memory::resolve_rva(0x0477CB58));
            }
            return cache;
        }
        inline app::IVRScreenshots_SubmitScreenshot__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_SubmitScreenshot__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_SubmitScreenshot");
        }
        inline app::IVRScreenshots_SubmitScreenshot* create() {
            return il2cpp::create_object<app::IVRScreenshots_SubmitScreenshot>(get_class());
        }
    } // namespace IVRScreenshots_SubmitScreenshot
} // namespace app::classes::types
