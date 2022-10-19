#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCanvas_LightCanvasStateData {
        inline app::LightCanvas_LightCanvasStateData__Class** type_info = (app::LightCanvas_LightCanvasStateData__Class**)(modloader::win::memory::resolve_rva(0x04780618));
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
