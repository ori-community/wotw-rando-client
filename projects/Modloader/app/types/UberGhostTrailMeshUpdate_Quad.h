#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate_Quad {
        namespace {
            inline app::UberGhostTrailMeshUpdate_Quad__Class* type_info_ref = nullptr;
        }
        inline app::UberGhostTrailMeshUpdate_Quad__Class** type_info = &type_info_ref;
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
        inline app::UberGhostTrailMeshUpdate_Quad__Array* create_array(const std::vector<app::UberGhostTrailMeshUpdate_Quad>& items) {
            return il2cpp::array_new<app::UberGhostTrailMeshUpdate_Quad__Array>(get_class(), items);
        }
    } // namespace UberGhostTrailMeshUpdate_Quad
} // namespace app::classes::types
