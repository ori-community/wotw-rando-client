#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintMesher {
        inline app::ConstraintMesher__Class** type_info = (app::ConstraintMesher__Class**)(modloader::win::memory::resolve_rva(0x04763108));
        inline app::ConstraintMesher__Class* get_class() {
            return il2cpp::get_class<app::ConstraintMesher__Class>(type_info, "TriangleNet.Meshing", "ConstraintMesher");
        }
        inline app::ConstraintMesher* create() {
            return il2cpp::create_object<app::ConstraintMesher>(get_class());
        }
    } // namespace ConstraintMesher
} // namespace app::classes::types
