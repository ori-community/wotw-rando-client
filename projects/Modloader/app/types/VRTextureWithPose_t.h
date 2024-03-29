#pragma once
#include <Modloader/app/structs/VRTextureWithPose_t.h>
#include <Modloader/app/structs/VRTextureWithPose_t__Boxed.h>
#include <Modloader/app/structs/VRTextureWithPose_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRTextureWithPose_t {
        inline app::VRTextureWithPose_t__Class** type_info() {
            static app::VRTextureWithPose_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VRTextureWithPose_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VRTextureWithPose_t__Class* get_class() {
            return il2cpp::get_class<app::VRTextureWithPose_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VRTextureWithPose_t");
        }
        inline app::VRTextureWithPose_t* create() {
            return il2cpp::create_object<app::VRTextureWithPose_t>(get_class());
        }
        inline app::VRTextureWithPose_t__Boxed* box(app::VRTextureWithPose_t value) {
            return il2cpp::box_value<app::VRTextureWithPose_t__Boxed>(get_class(), value);
        }
    } // namespace VRTextureWithPose_t
} // namespace app::classes::types
