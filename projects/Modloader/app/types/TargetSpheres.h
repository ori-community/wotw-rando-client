#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TargetSpheres {
        inline app::TargetSpheres__Class** type_info = (app::TargetSpheres__Class**)(modloader::win::memory::resolve_rva(0x047012C8));
        inline app::TargetSpheres__Class* get_class() {
            return il2cpp::get_class<app::TargetSpheres__Class>(type_info, "", "TargetSpheres");
        }
        inline app::TargetSpheres* create() {
            return il2cpp::create_object<app::TargetSpheres>(get_class());
        }
    } // namespace TargetSpheres
} // namespace app::classes::types
