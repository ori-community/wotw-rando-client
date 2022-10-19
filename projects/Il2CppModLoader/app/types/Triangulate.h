#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Triangulate {
        inline app::Triangulate__Class** type_info = (app::Triangulate__Class**)(modloader::win::memory::resolve_rva(0x0476A238));
        inline app::Triangulate__Class* get_class() {
            return il2cpp::get_class<app::Triangulate__Class>(type_info, "", "Triangulate");
        }
        inline app::Triangulate* create() {
            return il2cpp::create_object<app::Triangulate>(get_class());
        }
    } // namespace Triangulate
} // namespace app::classes::types
