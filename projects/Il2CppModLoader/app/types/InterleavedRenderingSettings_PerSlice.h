#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings_PerSlice {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InterleavedRenderingSettings_PerSlice__Class** type_info;
        inline app::InterleavedRenderingSettings_PerSlice__Class* get_class() {
            return il2cpp::get_nested_class<app::InterleavedRenderingSettings_PerSlice__Class>(type_info, "Moon.Rendering", "InterleavedRenderingSettings", "PerSlice");
        }
        inline app::InterleavedRenderingSettings_PerSlice* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings_PerSlice>(get_class());
        }
        inline app::InterleavedRenderingSettings_PerSlice__Array* create_array(int size) {
            return il2cpp::array_new<app::InterleavedRenderingSettings_PerSlice__Array>(get_class(), size);
        }
    } // namespace InterleavedRenderingSettings_PerSlice
} // namespace app::classes::types
