#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Contour {
        inline app::Contour__Class** type_info = (app::Contour__Class**)(modloader::win::memory::resolve_rva(0x047616C8));
        inline app::Contour__Class* get_class() {
            return il2cpp::get_class<app::Contour__Class>(type_info, "TriangleNet.Geometry", "Contour");
        }
        inline app::Contour* create() {
            return il2cpp::create_object<app::Contour>(get_class());
        }
    } // namespace Contour
} // namespace app::classes::types
