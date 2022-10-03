#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings_SliceLoop {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InterleavedRenderingSettings_SliceLoop__Class** type_info;
        inline app::InterleavedRenderingSettings_SliceLoop__Class* get_class() {
            return il2cpp::get_nested_class<app::InterleavedRenderingSettings_SliceLoop__Class>(type_info, "Moon.Rendering", "InterleavedRenderingSettings", "SliceLoop");
        }
        inline app::InterleavedRenderingSettings_SliceLoop* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings_SliceLoop>(get_class());
        }
    } // namespace InterleavedRenderingSettings_SliceLoop
} // namespace app::classes::types
