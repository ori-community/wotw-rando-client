#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LayeredRenderSettings__Class.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/LayeredRenderSettings__Array.h>

namespace app::classes::types {
    namespace LayeredRenderSettings {
        inline app::LayeredRenderSettings__Class** type_info = (app::LayeredRenderSettings__Class**)(modloader::win::memory::resolve_rva(0x047555E8));
        inline app::LayeredRenderSettings__Class* get_class() {
            return il2cpp::get_class<app::LayeredRenderSettings__Class>(type_info, "", "LayeredRenderSettings");
        }
        inline app::LayeredRenderSettings* create() {
            return il2cpp::create_object<app::LayeredRenderSettings>(get_class());
        }
        inline app::LayeredRenderSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::LayeredRenderSettings__Array>(get_class(), size);
        }
        inline app::LayeredRenderSettings__Array* create_array(const std::vector<app::LayeredRenderSettings*>& items) {
            return il2cpp::array_new<app::LayeredRenderSettings__Array>(get_class(), items);
        }
    } // namespace LayeredRenderSettings
} // namespace app::classes::types
