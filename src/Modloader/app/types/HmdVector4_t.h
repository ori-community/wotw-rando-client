#pragma once
#include <Modloader/app/structs/HmdVector4_t.h>
#include <Modloader/app/structs/HmdVector4_t__Boxed.h>
#include <Modloader/app/structs/HmdVector4_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HmdVector4_t {
        inline app::HmdVector4_t__Class** type_info() {
            static app::HmdVector4_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HmdVector4_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HmdVector4_t__Class* get_class() {
            return il2cpp::get_class<app::HmdVector4_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "HmdVector4_t");
        }
        inline app::HmdVector4_t* create() {
            return il2cpp::create_object<app::HmdVector4_t>(get_class());
        }
        inline app::HmdVector4_t__Boxed* box(app::HmdVector4_t value) {
            return il2cpp::box_value<app::HmdVector4_t__Boxed>(get_class(), value);
        }
    } // namespace HmdVector4_t
} // namespace app::classes::types
