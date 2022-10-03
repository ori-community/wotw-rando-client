#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MetaballRenderer_GridSample__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MetaballRenderer_GridSample__Array__Class** type_info;
        inline app::MetaballRenderer_GridSample__Array__Class* get_class() {
            return il2cpp::get_class<app::MetaballRenderer_GridSample__Array__Class>(type_info, "Metaballs2D", "MetaballRenderer+GridSample[]");
        }
        inline app::MetaballRenderer_GridSample__Array* create() {
            return il2cpp::create_object<app::MetaballRenderer_GridSample__Array>(get_class());
        }
    } // namespace MetaballRenderer_GridSample__Array
} // namespace app::classes::types
