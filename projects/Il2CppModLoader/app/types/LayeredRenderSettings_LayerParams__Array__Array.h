#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayeredRenderSettings_LayerParams__Array__Array {
        namespace {
            app::LayeredRenderSettings_LayerParams__Array__Array__Class* type_info_ref = nullptr;
        }
        app::LayeredRenderSettings_LayerParams__Array__Array__Class** type_info = &type_info_ref;
        inline app::LayeredRenderSettings_LayerParams__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::LayeredRenderSettings_LayerParams__Array__Array__Class>(type_info, "", "LayeredRenderSettings+LayerParams[][]");
        }
        inline app::LayeredRenderSettings_LayerParams__Array__Array* create() {
            return il2cpp::create_object<app::LayeredRenderSettings_LayerParams__Array__Array>(get_class());
        }
    } // namespace LayeredRenderSettings_LayerParams__Array__Array
} // namespace app::classes::types
