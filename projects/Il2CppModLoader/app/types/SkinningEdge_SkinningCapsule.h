#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkinningEdge_SkinningCapsule {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkinningEdge_SkinningCapsule__Class** type_info;
        inline app::SkinningEdge_SkinningCapsule__Class* get_class() {
            return il2cpp::get_nested_class<app::SkinningEdge_SkinningCapsule__Class>(type_info, "", "SkinningEdge", "SkinningCapsule");
        }
        inline app::SkinningEdge_SkinningCapsule* create() {
            return il2cpp::create_object<app::SkinningEdge_SkinningCapsule>(get_class());
        }
        inline app::SkinningEdge_SkinningCapsule__Array* create_array(int size) {
            return il2cpp::array_new<app::SkinningEdge_SkinningCapsule__Array>(get_class(), size);
        }
    } // namespace SkinningEdge_SkinningCapsule
} // namespace app::classes::types
