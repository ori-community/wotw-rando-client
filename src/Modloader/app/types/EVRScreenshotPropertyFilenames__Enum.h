#pragma once
#include <Modloader/app/structs/EVRScreenshotPropertyFilenames__Enum.h>
#include <Modloader/app/structs/EVRScreenshotPropertyFilenames__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRScreenshotPropertyFilenames__Enum {
        inline app::EVRScreenshotPropertyFilenames__Enum__Class** type_info() {
            static app::EVRScreenshotPropertyFilenames__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EVRScreenshotPropertyFilenames__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478C0A8));
            }
            return cache;
        }
        inline app::EVRScreenshotPropertyFilenames__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRScreenshotPropertyFilenames__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRScreenshotPropertyFilenames");
        }
        inline app::EVRScreenshotPropertyFilenames__Enum* create() {
            return il2cpp::create_object<app::EVRScreenshotPropertyFilenames__Enum>(get_class());
        }
    } // namespace EVRScreenshotPropertyFilenames__Enum
} // namespace app::classes::types
