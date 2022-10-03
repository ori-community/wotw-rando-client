#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate_Quad {
        namespace {
            app::UberGhostTrailMeshUpdate_Quad__Class* type_info_ref = nullptr;
        }
        app::UberGhostTrailMeshUpdate_Quad__Class** type_info = &type_info_ref;
        inline app::UberGhostTrailMeshUpdate_Quad__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGhostTrailMeshUpdate_Quad__Class>(type_info, "", "UberGhostTrailMeshUpdate", "Quad");
        }
        inline app::UberGhostTrailMeshUpdate_Quad* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate_Quad>(get_class());
        }
        inline app::UberGhostTrailMeshUpdate_Quad__Boxed* box(app::UberGhostTrailMeshUpdate_Quad value) {
            return il2cpp::box_value<app::UberGhostTrailMeshUpdate_Quad__Boxed>(get_class(), value);
        }
        inline app::UberGhostTrailMeshUpdate_Quad__Array* create_array(int size) {
            return il2cpp::array_new<app::UberGhostTrailMeshUpdate_Quad__Array>(get_class(), size);
        }
    } // namespace UberGhostTrailMeshUpdate_Quad
} // namespace app::classes::types
