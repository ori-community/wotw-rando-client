#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenVRInterop {
        namespace {
            app::OpenVRInterop__Class* type_info_ref = nullptr;
        }
        app::OpenVRInterop__Class** type_info = &type_info_ref;
        inline app::OpenVRInterop__Class* get_class() {
            return il2cpp::get_class<app::OpenVRInterop__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "OpenVRInterop");
        }
        inline app::OpenVRInterop* create() {
            return il2cpp::create_object<app::OpenVRInterop>(get_class());
        }
    } // namespace OpenVRInterop
} // namespace app::classes::types
