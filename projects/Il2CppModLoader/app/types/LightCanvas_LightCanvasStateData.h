#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_LightCanvasStateData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvas_LightCanvasStateData__Class** type_info;
        inline app::LightCanvas_LightCanvasStateData__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_LightCanvasStateData__Class>(type_info, "", "LightCanvas", "LightCanvasStateData");
        }
        inline app::LightCanvas_LightCanvasStateData* create() {
            return il2cpp::create_object<app::LightCanvas_LightCanvasStateData>(get_class());
        }
        inline app::LightCanvas_LightCanvasStateData__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCanvas_LightCanvasStateData__Array>(get_class(), size);
        }
        inline app::LightCanvas_LightCanvasStateData__Array* create_array(const std::vector<app::LightCanvas_LightCanvasStateData*>& items) {
            return il2cpp::array_new<app::LightCanvas_LightCanvasStateData__Array>(get_class(), items);
        }
    } // namespace LightCanvas_LightCanvasStateData
} // namespace app::classes::types
