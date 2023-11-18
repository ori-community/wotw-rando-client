#pragma once
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array__Array.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LayeredRenderSettings_LayerParams__Array {
        inline app::LayeredRenderSettings_LayerParams__Array__Class** type_info() {
            static app::LayeredRenderSettings_LayerParams__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LayeredRenderSettings_LayerParams__Array__Class**)(modloader::win::memory::resolve_rva(0x04736408));
            }
            return cache;
        }
        inline app::LayeredRenderSettings_LayerParams__Array__Class* get_class() {
            return il2cpp::get_class<app::LayeredRenderSettings_LayerParams__Array__Class>(type_info(), "", "LayeredRenderSettings+LayerParams[]");
        }
        inline app::LayeredRenderSettings_LayerParams__Array* create() {
            return il2cpp::create_object<app::LayeredRenderSettings_LayerParams__Array>(get_class());
        }
        inline app::LayeredRenderSettings_LayerParams__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::LayeredRenderSettings_LayerParams__Array__Array>(get_class(), size);
        }
        inline app::LayeredRenderSettings_LayerParams__Array__Array* create_array(const std::vector<app::LayeredRenderSettings_LayerParams__Array*>& items) {
            return il2cpp::array_new<app::LayeredRenderSettings_LayerParams__Array__Array>(get_class(), items);
        }
    } // namespace LayeredRenderSettings_LayerParams__Array
} // namespace app::classes::types
