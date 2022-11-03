#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintOptions {
        inline app::ConstraintOptions__Class** type_info = (app::ConstraintOptions__Class**)(modloader::win::memory::resolve_rva(0x047729C8));
        inline app::ConstraintOptions__Class* get_class() {
            return il2cpp::get_class<app::ConstraintOptions__Class>(type_info, "TriangleNet.Meshing", "ConstraintOptions");
        }
        inline app::ConstraintOptions* create() {
            return il2cpp::create_object<app::ConstraintOptions>(get_class());
        }
    } // namespace ConstraintOptions
} // namespace app::classes::types
