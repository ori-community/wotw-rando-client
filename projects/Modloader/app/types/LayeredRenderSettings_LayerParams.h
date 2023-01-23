#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Class.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array.h>

namespace app::classes::types {
    namespace LayeredRenderSettings_LayerParams {
        inline app::LayeredRenderSettings_LayerParams__Class** type_info = (app::LayeredRenderSettings_LayerParams__Class**)(modloader::win::memory::resolve_rva(0x0476A108));
        inline app::LayeredRenderSettings_LayerParams__Class* get_class() {
            return il2cpp::get_nested_class<app::LayeredRenderSettings_LayerParams__Class>(type_info, "", "LayeredRenderSettings", "LayerParams");
        }
        inline app::LayeredRenderSettings_LayerParams* create() {
            return il2cpp::create_object<app::LayeredRenderSettings_LayerParams>(get_class());
        }
        inline app::LayeredRenderSettings_LayerParams__Array* create_array(int size) {
            return il2cpp::array_new<app::LayeredRenderSettings_LayerParams__Array>(get_class(), size);
        }
        inline app::LayeredRenderSettings_LayerParams__Array* create_array(const std::vector<app::LayeredRenderSettings_LayerParams*>& items) {
            return il2cpp::array_new<app::LayeredRenderSettings_LayerParams__Array>(get_class(), items);
        }
    } // namespace LayeredRenderSettings_LayerParams
} // namespace app::classes::types
