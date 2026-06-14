#pragma once
#include <Modloader/app/structs/COpenVRContext.h>
#include <Modloader/app/structs/COpenVRContext__Boxed.h>
#include <Modloader/app/structs/COpenVRContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace COpenVRContext {
        inline app::COpenVRContext__Class** type_info() {
            static app::COpenVRContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::COpenVRContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::COpenVRContext__Class* get_class() {
            return il2cpp::get_class<app::COpenVRContext__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "COpenVRContext");
        }
        inline app::COpenVRContext* create() {
            return il2cpp::create_object<app::COpenVRContext>(get_class());
        }
        inline app::COpenVRContext__Boxed* box(app::COpenVRContext value) {
            return il2cpp::box_value<app::COpenVRContext__Boxed>(get_class(), value);
        }
    } // namespace COpenVRContext
} // namespace app::classes::types
