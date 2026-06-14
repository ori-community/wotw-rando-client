#pragma once
#include <Modloader/app/structs/EVRScreenshotError__Enum.h>
#include <Modloader/app/structs/EVRScreenshotError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRScreenshotError__Enum {
        inline app::EVRScreenshotError__Enum__Class** type_info() {
            static app::EVRScreenshotError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRScreenshotError__Enum__Class**)(modloader::win::memory::resolve_rva(0x04795390));
            }
            return cache;
        }
        inline app::EVRScreenshotError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRScreenshotError__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRScreenshotError");
        }
        inline app::EVRScreenshotError__Enum* create() {
            return il2cpp::create_object<app::EVRScreenshotError__Enum>(get_class());
        }
    } // namespace EVRScreenshotError__Enum
} // namespace app::classes::types
