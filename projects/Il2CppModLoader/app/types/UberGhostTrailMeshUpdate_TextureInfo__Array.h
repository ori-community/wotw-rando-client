#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate_TextureInfo__Array {
        namespace {
            inline app::UberGhostTrailMeshUpdate_TextureInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Array__Class** type_info = &type_info_ref;
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UberGhostTrailMeshUpdate_TextureInfo__Array__Class>(type_info, "", "UberGhostTrailMeshUpdate+TextureInfo[]");
        }
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Array* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate_TextureInfo__Array>(get_class());
        }
    } // namespace UberGhostTrailMeshUpdate_TextureInfo__Array
} // namespace app::classes::types
