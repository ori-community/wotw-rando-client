#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRApplications {
        inline app::IVRApplications__Class** type_info = (app::IVRApplications__Class**)(modloader::win::memory::resolve_rva(0x047878D8));
        inline app::IVRApplications__Class* get_class() {
            return il2cpp::get_class<app::IVRApplications__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRApplications");
        }
        inline app::IVRApplications* create() {
            return il2cpp::create_object<app::IVRApplications>(get_class());
        }
        inline app::IVRApplications__Boxed* box(app::IVRApplications value) {
            return il2cpp::box_value<app::IVRApplications__Boxed>(get_class(), value);
        }
    } // namespace IVRApplications
} // namespace app::classes::types
