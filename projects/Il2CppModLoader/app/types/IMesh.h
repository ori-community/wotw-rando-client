#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMesh {
        inline app::IMesh__Class** type_info = (app::IMesh__Class**)(modloader::win::memory::resolve_rva(0x04775558));
        inline app::IMesh__Class* get_class() {
            return il2cpp::get_class<app::IMesh__Class>(type_info, "TriangleNet.Meshing", "IMesh");
        }
    } // namespace IMesh
} // namespace app::classes::types
