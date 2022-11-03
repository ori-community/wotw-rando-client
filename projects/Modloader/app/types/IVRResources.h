#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRResources {
        inline app::IVRResources__Class** type_info = (app::IVRResources__Class**)(modloader::win::memory::resolve_rva(0x04703998));
        inline app::IVRResources__Class* get_class() {
            return il2cpp::get_class<app::IVRResources__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRResources");
        }
        inline app::IVRResources* create() {
            return il2cpp::create_object<app::IVRResources>(get_class());
        }
        inline app::IVRResources__Boxed* box(app::IVRResources value) {
            return il2cpp::box_value<app::IVRResources__Boxed>(get_class(), value);
        }
    } // namespace IVRResources
} // namespace app::classes::types
