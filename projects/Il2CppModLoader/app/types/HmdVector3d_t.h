#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HmdVector3d_t {
        namespace {
            inline app::HmdVector3d_t__Class* type_info_ref = nullptr;
        }
        inline app::HmdVector3d_t__Class** type_info = &type_info_ref;
        inline app::HmdVector3d_t__Class* get_class() {
            return il2cpp::get_class<app::HmdVector3d_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdVector3d_t");
        }
        inline app::HmdVector3d_t* create() {
            return il2cpp::create_object<app::HmdVector3d_t>(get_class());
        }
        inline app::HmdVector3d_t__Boxed* box(app::HmdVector3d_t value) {
            return il2cpp::box_value<app::HmdVector3d_t__Boxed>(get_class(), value);
        }
    } // namespace HmdVector3d_t
} // namespace app::classes::types
