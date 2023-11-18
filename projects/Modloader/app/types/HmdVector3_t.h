#pragma once
#include <Modloader/app/structs/HmdVector3_t.h>
#include <Modloader/app/structs/HmdVector3_t__Boxed.h>
#include <Modloader/app/structs/HmdVector3_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HmdVector3_t {
        inline app::HmdVector3_t__Class** type_info() {
            static app::HmdVector3_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HmdVector3_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HmdVector3_t__Class* get_class() {
            return il2cpp::get_class<app::HmdVector3_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "HmdVector3_t");
        }
        inline app::HmdVector3_t* create() {
            return il2cpp::create_object<app::HmdVector3_t>(get_class());
        }
        inline app::HmdVector3_t__Boxed* box(app::HmdVector3_t value) {
            return il2cpp::box_value<app::HmdVector3_t__Boxed>(get_class(), value);
        }
    } // namespace HmdVector3_t
} // namespace app::classes::types
