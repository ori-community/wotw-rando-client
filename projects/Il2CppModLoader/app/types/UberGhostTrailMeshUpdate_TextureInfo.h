#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate_TextureInfo {
        namespace {
            app::UberGhostTrailMeshUpdate_TextureInfo__Class* type_info_ref = nullptr;
        }
        app::UberGhostTrailMeshUpdate_TextureInfo__Class** type_info = &type_info_ref;
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGhostTrailMeshUpdate_TextureInfo__Class>(type_info, "", "UberGhostTrailMeshUpdate", "TextureInfo");
        }
        inline app::UberGhostTrailMeshUpdate_TextureInfo* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate_TextureInfo>(get_class());
        }
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Boxed* box(app::UberGhostTrailMeshUpdate_TextureInfo value) {
            return il2cpp::box_value<app::UberGhostTrailMeshUpdate_TextureInfo__Boxed>(get_class(), value);
        }
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UberGhostTrailMeshUpdate_TextureInfo__Array>(get_class(), size);
        }
        inline app::UberGhostTrailMeshUpdate_TextureInfo__Array* create_array(const std::vector<app::UberGhostTrailMeshUpdate_TextureInfo>& items) {
            return il2cpp::array_new<app::UberGhostTrailMeshUpdate_TextureInfo__Array>(get_class(), items);
        }
    } // namespace UberGhostTrailMeshUpdate_TextureInfo
} // namespace app::classes::types
