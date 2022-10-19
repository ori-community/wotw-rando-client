#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Triangles {
        inline app::Triangles__Class** type_info = (app::Triangles__Class**)(modloader::win::memory::resolve_rva(0x04734E80));
        inline app::Triangles__Class* get_class() {
            return il2cpp::get_class<app::Triangles__Class>(type_info, "UnityStandardAssets.ImageEffects", "Triangles");
        }
        inline app::Triangles* create() {
            return il2cpp::create_object<app::Triangles>(get_class());
        }
    } // namespace Triangles
} // namespace app::classes::types
