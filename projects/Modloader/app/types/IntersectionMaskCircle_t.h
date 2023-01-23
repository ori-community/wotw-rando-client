#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IntersectionMaskCircle_t__Class.h>
#include <Modloader/app/structs/IntersectionMaskCircle_t.h>
#include <Modloader/app/structs/IntersectionMaskCircle_t__Boxed.h>

namespace app::classes::types {
    namespace IntersectionMaskCircle_t {
        namespace {
            inline app::IntersectionMaskCircle_t__Class* type_info_ref = nullptr;
        }
        inline app::IntersectionMaskCircle_t__Class** type_info = &type_info_ref;
        inline app::IntersectionMaskCircle_t__Class* get_class() {
            return il2cpp::get_class<app::IntersectionMaskCircle_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IntersectionMaskCircle_t");
        }
        inline app::IntersectionMaskCircle_t* create() {
            return il2cpp::create_object<app::IntersectionMaskCircle_t>(get_class());
        }
        inline app::IntersectionMaskCircle_t__Boxed* box(app::IntersectionMaskCircle_t value) {
            return il2cpp::box_value<app::IntersectionMaskCircle_t__Boxed>(get_class(), value);
        }
    } // namespace IntersectionMaskCircle_t
} // namespace app::classes::types
