#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRChaperone {
        inline app::IVRChaperone__Class** type_info = (app::IVRChaperone__Class**)(modloader::win::memory::resolve_rva(0x04754828));
        inline app::IVRChaperone__Class* get_class() {
            return il2cpp::get_class<app::IVRChaperone__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone");
        }
        inline app::IVRChaperone* create() {
            return il2cpp::create_object<app::IVRChaperone>(get_class());
        }
        inline app::IVRChaperone__Boxed* box(app::IVRChaperone value) {
            return il2cpp::box_value<app::IVRChaperone__Boxed>(get_class(), value);
        }
    } // namespace IVRChaperone
} // namespace app::classes::types
