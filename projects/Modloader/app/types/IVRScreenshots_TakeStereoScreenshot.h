#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRScreenshots_TakeStereoScreenshot {
        inline app::IVRScreenshots_TakeStereoScreenshot__Class** type_info = (app::IVRScreenshots_TakeStereoScreenshot__Class**)(modloader::win::memory::resolve_rva(0x047961D8));
        inline app::IVRScreenshots_TakeStereoScreenshot__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_TakeStereoScreenshot__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_TakeStereoScreenshot");
        }
        inline app::IVRScreenshots_TakeStereoScreenshot* create() {
            return il2cpp::create_object<app::IVRScreenshots_TakeStereoScreenshot>(get_class());
        }
    } // namespace IVRScreenshots_TakeStereoScreenshot
} // namespace app::classes::types
