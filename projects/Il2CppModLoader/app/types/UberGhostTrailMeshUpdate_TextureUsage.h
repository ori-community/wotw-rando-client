#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate_TextureUsage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberGhostTrailMeshUpdate_TextureUsage__Class** type_info;
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGhostTrailMeshUpdate_TextureUsage__Class>(type_info, "", "UberGhostTrailMeshUpdate", "TextureUsage");
        }
        inline app::UberGhostTrailMeshUpdate_TextureUsage* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate_TextureUsage>(get_class());
        }
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Boxed* box(app::UberGhostTrailMeshUpdate_TextureUsage value) {
            return il2cpp::box_value<app::UberGhostTrailMeshUpdate_TextureUsage__Boxed>(get_class(), value);
        }
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Array* create_array(int size) {
            return il2cpp::array_new<app::UberGhostTrailMeshUpdate_TextureUsage__Array>(get_class(), size);
        }
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Array* create_array(const std::vector<app::UberGhostTrailMeshUpdate_TextureUsage>& items) {
            return il2cpp::array_new<app::UberGhostTrailMeshUpdate_TextureUsage__Array>(get_class(), items);
        }
    } // namespace UberGhostTrailMeshUpdate_TextureUsage
} // namespace app::classes::types
