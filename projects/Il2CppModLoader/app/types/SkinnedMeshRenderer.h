#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshRenderer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkinnedMeshRenderer__Class** type_info;
        inline app::SkinnedMeshRenderer__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshRenderer__Class>(type_info, "UnityEngine", "SkinnedMeshRenderer");
        }
        inline app::SkinnedMeshRenderer* create() {
            return il2cpp::create_object<app::SkinnedMeshRenderer>(get_class());
        }
        inline app::SkinnedMeshRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::SkinnedMeshRenderer__Array>(get_class(), size);
        }
        inline app::SkinnedMeshRenderer__Array* create_array(const std::vector<app::SkinnedMeshRenderer*>& items) {
            return il2cpp::array_new<app::SkinnedMeshRenderer__Array>(get_class(), items);
        }
    } // namespace SkinnedMeshRenderer
} // namespace app::classes::types
