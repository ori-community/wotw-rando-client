#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderModel_t__Class.h>
#include <Modloader/app/structs/RenderModel_t.h>
#include <Modloader/app/structs/RenderModel_t__Boxed.h>

namespace app::classes::types {
    namespace RenderModel_t {
        namespace {
            inline app::RenderModel_t__Class* type_info_ref = nullptr;
        }
        inline app::RenderModel_t__Class** type_info = &type_info_ref;
        inline app::RenderModel_t__Class* get_class() {
            return il2cpp::get_class<app::RenderModel_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "RenderModel_t");
        }
        inline app::RenderModel_t* create() {
            return il2cpp::create_object<app::RenderModel_t>(get_class());
        }
        inline app::RenderModel_t__Boxed* box(app::RenderModel_t value) {
            return il2cpp::box_value<app::RenderModel_t__Boxed>(get_class(), value);
        }
    } // namespace RenderModel_t
} // namespace app::classes::types
