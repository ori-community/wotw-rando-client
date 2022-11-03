#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRScreenshotError__Enum {
        inline app::EVRScreenshotError__Enum__Class** type_info = (app::EVRScreenshotError__Enum__Class**)(modloader::win::memory::resolve_rva(0x04795390));
        inline app::EVRScreenshotError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRScreenshotError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRScreenshotError");
        }
        inline app::EVRScreenshotError__Enum* create() {
            return il2cpp::create_object<app::EVRScreenshotError__Enum>(get_class());
        }
    } // namespace EVRScreenshotError__Enum
} // namespace app::classes::types
