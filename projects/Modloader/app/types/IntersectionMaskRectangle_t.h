#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IntersectionMaskRectangle_t__Class.h>
#include <Modloader/app/structs/IntersectionMaskRectangle_t.h>
#include <Modloader/app/structs/IntersectionMaskRectangle_t__Boxed.h>

namespace app::classes::types {
    namespace IntersectionMaskRectangle_t {
        namespace {
            inline app::IntersectionMaskRectangle_t__Class* type_info_ref = nullptr;
        }
        inline app::IntersectionMaskRectangle_t__Class** type_info = &type_info_ref;
        inline app::IntersectionMaskRectangle_t__Class* get_class() {
            return il2cpp::get_class<app::IntersectionMaskRectangle_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IntersectionMaskRectangle_t");
        }
        inline app::IntersectionMaskRectangle_t* create() {
            return il2cpp::create_object<app::IntersectionMaskRectangle_t>(get_class());
        }
        inline app::IntersectionMaskRectangle_t__Boxed* box(app::IntersectionMaskRectangle_t value) {
            return il2cpp::box_value<app::IntersectionMaskRectangle_t__Boxed>(get_class(), value);
        }
    } // namespace IntersectionMaskRectangle_t
} // namespace app::classes::types
