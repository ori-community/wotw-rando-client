#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor__Class.h>
#include <Modloader/app/structs/IVRCompositor.h>
#include <Modloader/app/structs/IVRCompositor__Boxed.h>

namespace app::classes::types {
    namespace IVRCompositor {
        inline app::IVRCompositor__Class** type_info = (app::IVRCompositor__Class**)(modloader::win::memory::resolve_rva(0x0475CA60));
        inline app::IVRCompositor__Class* get_class() {
            return il2cpp::get_class<app::IVRCompositor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor");
        }
        inline app::IVRCompositor* create() {
            return il2cpp::create_object<app::IVRCompositor>(get_class());
        }
        inline app::IVRCompositor__Boxed* box(app::IVRCompositor value) {
            return il2cpp::box_value<app::IVRCompositor__Boxed>(get_class(), value);
        }
    } // namespace IVRCompositor
} // namespace app::classes::types
