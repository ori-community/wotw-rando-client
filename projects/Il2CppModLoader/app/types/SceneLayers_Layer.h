#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneLayers_Layer {
        inline app::SceneLayers_Layer__Class** type_info = (app::SceneLayers_Layer__Class**)(modloader::win::memory::resolve_rva(0x04774330));
        inline app::SceneLayers_Layer__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLayers_Layer__Class>(type_info, "", "SceneLayers", "Layer");
        }
        inline app::SceneLayers_Layer* create() {
            return il2cpp::create_object<app::SceneLayers_Layer>(get_class());
        }
        inline app::SceneLayers_Layer__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneLayers_Layer__Array>(get_class(), size);
        }
        inline app::SceneLayers_Layer__Array* create_array(const std::vector<app::SceneLayers_Layer*>& items) {
            return il2cpp::array_new<app::SceneLayers_Layer__Array>(get_class(), items);
        }
    } // namespace SceneLayers_Layer
} // namespace app::classes::types
