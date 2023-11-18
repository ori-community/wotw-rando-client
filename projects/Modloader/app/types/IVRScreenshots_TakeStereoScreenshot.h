#pragma once
#include <Modloader/app/structs/IVRScreenshots_TakeStereoScreenshot.h>
#include <Modloader/app/structs/IVRScreenshots_TakeStereoScreenshot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_TakeStereoScreenshot {
        inline app::IVRScreenshots_TakeStereoScreenshot__Class** type_info() {
            static app::IVRScreenshots_TakeStereoScreenshot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRScreenshots_TakeStereoScreenshot__Class**)(modloader::win::memory::resolve_rva(0x047961D8));
            }
            return cache;
        }
        inline app::IVRScreenshots_TakeStereoScreenshot__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_TakeStereoScreenshot__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_TakeStereoScreenshot");
        }
        inline app::IVRScreenshots_TakeStereoScreenshot* create() {
            return il2cpp::create_object<app::IVRScreenshots_TakeStereoScreenshot>(get_class());
        }
    } // namespace IVRScreenshots_TakeStereoScreenshot
} // namespace app::classes::types
