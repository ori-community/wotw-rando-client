#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings {
        inline app::InterleavedRenderingSettings__Class** type_info = (app::InterleavedRenderingSettings__Class**)(modloader::win::memory::resolve_rva(0x047992B0));
        inline app::InterleavedRenderingSettings__Class* get_class() {
            return il2cpp::get_class<app::InterleavedRenderingSettings__Class>(type_info, "Moon.Rendering", "InterleavedRenderingSettings");
        }
        inline app::InterleavedRenderingSettings* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings>(get_class());
        }
    } // namespace InterleavedRenderingSettings
} // namespace app::classes::types
