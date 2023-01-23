#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRScreenshots_HookScreenshot__Class.h>
#include <Modloader/app/structs/IVRScreenshots_HookScreenshot.h>

namespace app::classes::types {
    namespace IVRScreenshots_HookScreenshot {
        inline app::IVRScreenshots_HookScreenshot__Class** type_info = (app::IVRScreenshots_HookScreenshot__Class**)(modloader::win::memory::resolve_rva(0x04753D90));
        inline app::IVRScreenshots_HookScreenshot__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_HookScreenshot__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_HookScreenshot");
        }
        inline app::IVRScreenshots_HookScreenshot* create() {
            return il2cpp::create_object<app::IVRScreenshots_HookScreenshot>(get_class());
        }
    } // namespace IVRScreenshots_HookScreenshot
} // namespace app::classes::types
