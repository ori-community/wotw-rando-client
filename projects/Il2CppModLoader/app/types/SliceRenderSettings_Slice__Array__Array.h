#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SliceRenderSettings_Slice__Array__Array {
        namespace {
            app::SliceRenderSettings_Slice__Array__Array__Class* type_info_ref = nullptr;
        }
        app::SliceRenderSettings_Slice__Array__Array__Class** type_info = &type_info_ref;
        inline app::SliceRenderSettings_Slice__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::SliceRenderSettings_Slice__Array__Array__Class>(type_info, "Moon.Rendering", "SliceRenderSettings+Slice[][]");
        }
        inline app::SliceRenderSettings_Slice__Array__Array* create() {
            return il2cpp::create_object<app::SliceRenderSettings_Slice__Array__Array>(get_class());
        }
    } // namespace SliceRenderSettings_Slice__Array__Array
} // namespace app::classes::types
