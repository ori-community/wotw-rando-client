#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GraphicsExt {
        inline app::GraphicsExt__Class** type_info = (app::GraphicsExt__Class**)(modloader::win::memory::resolve_rva(0x047254E0));
        inline app::GraphicsExt__Class* get_class() {
            return il2cpp::get_class<app::GraphicsExt__Class>(type_info, "Moon.Rendering", "GraphicsExt");
        }
        inline app::GraphicsExt* create() {
            return il2cpp::create_object<app::GraphicsExt>(get_class());
        }
    } // namespace GraphicsExt
} // namespace app::classes::types
