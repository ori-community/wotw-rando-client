#pragma once
#include <Modloader/app/structs/SceneLayers_Layer.h>
#include <Modloader/app/structs/SceneLayers_Layer__Array.h>
#include <Modloader/app/structs/SceneLayers_Layer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLayers_Layer {
        inline app::SceneLayers_Layer__Class** type_info() {
            static app::SceneLayers_Layer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneLayers_Layer__Class**)(modloader::win::memory::resolve_rva(0x04774330));
            }
            return cache;
        }
        inline app::SceneLayers_Layer__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneLayers_Layer__Class>(type_info(), "", "SceneLayers", "Layer");
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
