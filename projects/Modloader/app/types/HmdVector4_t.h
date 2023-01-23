#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HmdVector4_t__Class.h>
#include <Modloader/app/structs/HmdVector4_t.h>
#include <Modloader/app/structs/HmdVector4_t__Boxed.h>

namespace app::classes::types {
    namespace HmdVector4_t {
        namespace {
            inline app::HmdVector4_t__Class* type_info_ref = nullptr;
        }
        inline app::HmdVector4_t__Class** type_info = &type_info_ref;
        inline app::HmdVector4_t__Class* get_class() {
            return il2cpp::get_class<app::HmdVector4_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "HmdVector4_t");
        }
        inline app::HmdVector4_t* create() {
            return il2cpp::create_object<app::HmdVector4_t>(get_class());
        }
        inline app::HmdVector4_t__Boxed* box(app::HmdVector4_t value) {
            return il2cpp::box_value<app::HmdVector4_t__Boxed>(get_class(), value);
        }
    } // namespace HmdVector4_t
} // namespace app::classes::types
