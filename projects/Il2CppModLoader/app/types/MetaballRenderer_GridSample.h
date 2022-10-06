#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MetaballRenderer_GridSample {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MetaballRenderer_GridSample__Class** type_info;
        inline app::MetaballRenderer_GridSample__Class* get_class() {
            return il2cpp::get_nested_class<app::MetaballRenderer_GridSample__Class>(type_info, "Metaballs2D", "MetaballRenderer", "GridSample");
        }
        inline app::MetaballRenderer_GridSample* create() {
            return il2cpp::create_object<app::MetaballRenderer_GridSample>(get_class());
        }
        inline app::MetaballRenderer_GridSample__Array* create_array(int size) {
            return il2cpp::array_new<app::MetaballRenderer_GridSample__Array>(get_class(), size);
        }
        inline app::MetaballRenderer_GridSample__Array* create_array(const std::vector<app::MetaballRenderer_GridSample*>& items) {
            return il2cpp::array_new<app::MetaballRenderer_GridSample__Array>(get_class(), items);
        }
    } // namespace MetaballRenderer_GridSample
} // namespace app::classes::types
