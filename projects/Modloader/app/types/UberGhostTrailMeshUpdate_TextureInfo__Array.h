#pragma once
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureInfo__Array.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate_TextureInfo__Array {
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Array__Class** type_info() {
            static app::UberGhostTrailMeshUpdate_TextureInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberGhostTrailMeshUpdate_TextureInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UberGhostTrailMeshUpdate_TextureInfo__Array__Class>(type_info(), "", "UberGhostTrailMeshUpdate+TextureInfo[]");
        }
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Array* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate_TextureInfo__Array>(get_class());
        }
    } // namespace UberGhostTrailMeshUpdate_TextureInfo__Array
} // namespace app::classes::types
