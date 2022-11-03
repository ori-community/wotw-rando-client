#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormEntity_EnableVerletTentacles_d_185 {
        inline app::SandWormEntity_EnableVerletTentacles_d_185__Class** type_info = (app::SandWormEntity_EnableVerletTentacles_d_185__Class**)(modloader::win::memory::resolve_rva(0x0475DE10));
        inline app::SandWormEntity_EnableVerletTentacles_d_185__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_EnableVerletTentacles_d_185__Class>(type_info, "", "SandWormEntity", "<EnableVerletTentacles>d__185");
        }
        inline app::SandWormEntity_EnableVerletTentacles_d_185* create() {
            return il2cpp::create_object<app::SandWormEntity_EnableVerletTentacles_d_185>(get_class());
        }
    } // namespace SandWormEntity_EnableVerletTentacles_d_185
} // namespace app::classes::types
