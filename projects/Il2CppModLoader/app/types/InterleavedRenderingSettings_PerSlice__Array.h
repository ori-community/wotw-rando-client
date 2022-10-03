#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings_PerSlice__Array {
        namespace {
            app::InterleavedRenderingSettings_PerSlice__Array__Class* type_info_ref = nullptr;
        }
        app::InterleavedRenderingSettings_PerSlice__Array__Class** type_info = &type_info_ref;
        inline app::InterleavedRenderingSettings_PerSlice__Array__Class* get_class() {
            return il2cpp::get_class<app::InterleavedRenderingSettings_PerSlice__Array__Class>(type_info, "Moon.Rendering", "InterleavedRenderingSettings+PerSlice[]");
        }
        inline app::InterleavedRenderingSettings_PerSlice__Array* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings_PerSlice__Array>(get_class());
        }
    } // namespace InterleavedRenderingSettings_PerSlice__Array
} // namespace app::classes::types
