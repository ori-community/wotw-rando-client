#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum {
        namespace {
            app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "WaterSimulationUpdateMode");
        }
        inline app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum>(get_class());
        }
        inline app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array* create_array(const std::vector<app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum*>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum
} // namespace app::classes::types
