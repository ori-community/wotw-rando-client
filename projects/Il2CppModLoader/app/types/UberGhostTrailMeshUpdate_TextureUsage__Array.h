#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate_TextureUsage__Array {
        namespace {
            app::UberGhostTrailMeshUpdate_TextureUsage__Array__Class* type_info_ref = nullptr;
        }
        app::UberGhostTrailMeshUpdate_TextureUsage__Array__Class** type_info = &type_info_ref;
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Array__Class* get_class() {
            return il2cpp::get_class<app::UberGhostTrailMeshUpdate_TextureUsage__Array__Class>(type_info, "", "UberGhostTrailMeshUpdate+TextureUsage[]");
        }
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Array* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate_TextureUsage__Array>(get_class());
        }
    } // namespace UberGhostTrailMeshUpdate_TextureUsage__Array
} // namespace app::classes::types
