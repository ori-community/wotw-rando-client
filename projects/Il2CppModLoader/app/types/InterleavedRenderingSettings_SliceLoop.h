#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InterleavedRenderingSettings_SliceLoop {
        inline app::InterleavedRenderingSettings_SliceLoop__Class** type_info = (app::InterleavedRenderingSettings_SliceLoop__Class**)(modloader::win::memory::resolve_rva(0x0475F680));
        inline app::InterleavedRenderingSettings_SliceLoop__Class* get_class() {
            return il2cpp::get_nested_class<app::InterleavedRenderingSettings_SliceLoop__Class>(type_info, "Moon.Rendering", "InterleavedRenderingSettings", "SliceLoop");
        }
        inline app::InterleavedRenderingSettings_SliceLoop* create() {
            return il2cpp::create_object<app::InterleavedRenderingSettings_SliceLoop>(get_class());
        }
    } // namespace InterleavedRenderingSettings_SliceLoop
} // namespace app::classes::types
