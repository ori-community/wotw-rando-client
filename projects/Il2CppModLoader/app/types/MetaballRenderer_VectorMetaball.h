#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MetaballRenderer_VectorMetaball {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MetaballRenderer_VectorMetaball__Class** type_info;
        inline app::MetaballRenderer_VectorMetaball__Class* get_class() {
            return il2cpp::get_nested_class<app::MetaballRenderer_VectorMetaball__Class>(type_info, "Metaballs2D", "MetaballRenderer", "VectorMetaball");
        }
        inline app::MetaballRenderer_VectorMetaball* create() {
            return il2cpp::create_object<app::MetaballRenderer_VectorMetaball>(get_class());
        }
    } // namespace MetaballRenderer_VectorMetaball
} // namespace app::classes::types
