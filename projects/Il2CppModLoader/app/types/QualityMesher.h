#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QualityMesher {
        inline app::QualityMesher__Class** type_info = (app::QualityMesher__Class**)(modloader::win::memory::resolve_rva(0x0478EF50));
        inline app::QualityMesher__Class* get_class() {
            return il2cpp::get_class<app::QualityMesher__Class>(type_info, "TriangleNet.Meshing", "QualityMesher");
        }
        inline app::QualityMesher* create() {
            return il2cpp::create_object<app::QualityMesher>(get_class());
        }
    } // namespace QualityMesher
} // namespace app::classes::types
