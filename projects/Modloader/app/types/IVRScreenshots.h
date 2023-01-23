#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRScreenshots__Class.h>
#include <Modloader/app/structs/IVRScreenshots.h>
#include <Modloader/app/structs/IVRScreenshots__Boxed.h>

namespace app::classes::types {
    namespace IVRScreenshots {
        inline app::IVRScreenshots__Class** type_info = (app::IVRScreenshots__Class**)(modloader::win::memory::resolve_rva(0x04766368));
        inline app::IVRScreenshots__Class* get_class() {
            return il2cpp::get_class<app::IVRScreenshots__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots");
        }
        inline app::IVRScreenshots* create() {
            return il2cpp::create_object<app::IVRScreenshots>(get_class());
        }
        inline app::IVRScreenshots__Boxed* box(app::IVRScreenshots value) {
            return il2cpp::box_value<app::IVRScreenshots__Boxed>(get_class(), value);
        }
    } // namespace IVRScreenshots
} // namespace app::classes::types
