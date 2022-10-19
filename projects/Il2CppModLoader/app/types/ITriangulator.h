#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITriangulator {
        inline app::ITriangulator__Class** type_info = (app::ITriangulator__Class**)(modloader::win::memory::resolve_rva(0x0470D678));
        inline app::ITriangulator__Class* get_class() {
            return il2cpp::get_class<app::ITriangulator__Class>(type_info, "TriangleNet.Meshing", "ITriangulator");
        }
    } // namespace ITriangulator
} // namespace app::classes::types
