#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HiddenAreaMesh_t {
        namespace {
            inline app::HiddenAreaMesh_t__Class* type_info_ref = nullptr;
        }
        inline app::HiddenAreaMesh_t__Class** type_info = &type_info_ref;
        inline app::HiddenAreaMesh_t__Class* get_class() {
            return il2cpp::get_class<app::HiddenAreaMesh_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HiddenAreaMesh_t");
        }
        inline app::HiddenAreaMesh_t* create() {
            return il2cpp::create_object<app::HiddenAreaMesh_t>(get_class());
        }
        inline app::HiddenAreaMesh_t__Boxed* box(app::HiddenAreaMesh_t value) {
            return il2cpp::box_value<app::HiddenAreaMesh_t__Boxed>(get_class(), value);
        }
    } // namespace HiddenAreaMesh_t
} // namespace app::classes::types
