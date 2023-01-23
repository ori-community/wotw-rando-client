#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array {
        namespace {
            inline app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset+WaterSimulationUpdateMode[]");
        }
        inline app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Array
} // namespace app::classes::types
