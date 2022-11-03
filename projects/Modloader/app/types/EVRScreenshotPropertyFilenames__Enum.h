#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRScreenshotPropertyFilenames__Enum {
        inline app::EVRScreenshotPropertyFilenames__Enum__Class** type_info = (app::EVRScreenshotPropertyFilenames__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478C0A8));
        inline app::EVRScreenshotPropertyFilenames__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRScreenshotPropertyFilenames__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRScreenshotPropertyFilenames");
        }
        inline app::EVRScreenshotPropertyFilenames__Enum* create() {
            return il2cpp::create_object<app::EVRScreenshotPropertyFilenames__Enum>(get_class());
        }
    } // namespace EVRScreenshotPropertyFilenames__Enum
} // namespace app::classes::types
