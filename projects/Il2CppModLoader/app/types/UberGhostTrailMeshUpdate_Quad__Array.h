#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate_Quad__Array {
        namespace {
            inline app::UberGhostTrailMeshUpdate_Quad__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberGhostTrailMeshUpdate_Quad__Array__Class** type_info = &type_info_ref;
        inline app::UberGhostTrailMeshUpdate_Quad__Array__Class* get_class() {
            return il2cpp::get_class<app::UberGhostTrailMeshUpdate_Quad__Array__Class>(type_info, "", "UberGhostTrailMeshUpdate+Quad[]");
        }
        inline app::UberGhostTrailMeshUpdate_Quad__Array* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate_Quad__Array>(get_class());
        }
    } // namespace UberGhostTrailMeshUpdate_Quad__Array
} // namespace app::classes::types
