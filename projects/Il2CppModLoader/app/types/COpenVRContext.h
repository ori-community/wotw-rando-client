#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace COpenVRContext {
        namespace {
            app::COpenVRContext__Class* type_info_ref = nullptr;
        }
        app::COpenVRContext__Class** type_info = &type_info_ref;
        inline app::COpenVRContext__Class* get_class() {
            return il2cpp::get_class<app::COpenVRContext__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "COpenVRContext");
        }
        inline app::COpenVRContext* create() {
            return il2cpp::create_object<app::COpenVRContext>(get_class());
        }
        inline app::COpenVRContext__Boxed* box(app::COpenVRContext value) {
            return il2cpp::box_value<app::COpenVRContext__Boxed>(get_class(), value);
        }
    } // namespace COpenVRContext
} // namespace app::classes::types
