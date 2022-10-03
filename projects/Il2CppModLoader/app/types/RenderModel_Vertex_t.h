#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderModel_Vertex_t {
        namespace {
            app::RenderModel_Vertex_t__Class* type_info_ref = nullptr;
        }
        app::RenderModel_Vertex_t__Class** type_info = &type_info_ref;
        inline app::RenderModel_Vertex_t__Class* get_class() {
            return il2cpp::get_class<app::RenderModel_Vertex_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "RenderModel_Vertex_t");
        }
        inline app::RenderModel_Vertex_t* create() {
            return il2cpp::create_object<app::RenderModel_Vertex_t>(get_class());
        }
        inline app::RenderModel_Vertex_t__Boxed* box(app::RenderModel_Vertex_t value) {
            return il2cpp::box_value<app::RenderModel_Vertex_t__Boxed>(get_class(), value);
        }
    } // namespace RenderModel_Vertex_t
} // namespace app::classes::types
