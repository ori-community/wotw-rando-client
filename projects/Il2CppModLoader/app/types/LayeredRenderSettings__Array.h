#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayeredRenderSettings__Array {
        namespace {
            app::LayeredRenderSettings__Array__Class* type_info_ref = nullptr;
        }
        app::LayeredRenderSettings__Array__Class** type_info = &type_info_ref;
        inline app::LayeredRenderSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::LayeredRenderSettings__Array__Class>(type_info, "", "LayeredRenderSettings[]");
        }
        inline app::LayeredRenderSettings__Array* create() {
            return il2cpp::create_object<app::LayeredRenderSettings__Array>(get_class());
        }
    } // namespace LayeredRenderSettings__Array
} // namespace app::classes::types
