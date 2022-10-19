#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericMesher {
        inline app::GenericMesher__Class** type_info = (app::GenericMesher__Class**)(modloader::win::memory::resolve_rva(0x04721790));
        inline app::GenericMesher__Class* get_class() {
            return il2cpp::get_class<app::GenericMesher__Class>(type_info, "TriangleNet.Meshing", "GenericMesher");
        }
        inline app::GenericMesher* create() {
            return il2cpp::create_object<app::GenericMesher>(get_class());
        }
    } // namespace GenericMesher
} // namespace app::classes::types
