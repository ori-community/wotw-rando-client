#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay {
        inline app::IVRExtendedDisplay__Class** type_info = (app::IVRExtendedDisplay__Class**)(modloader::win::memory::resolve_rva(0x0477A700));
        inline app::IVRExtendedDisplay__Class* get_class() {
            return il2cpp::get_class<app::IVRExtendedDisplay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay");
        }
        inline app::IVRExtendedDisplay* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay>(get_class());
        }
        inline app::IVRExtendedDisplay__Boxed* box(app::IVRExtendedDisplay value) {
            return il2cpp::box_value<app::IVRExtendedDisplay__Boxed>(get_class(), value);
        }
    } // namespace IVRExtendedDisplay
} // namespace app::classes::types
