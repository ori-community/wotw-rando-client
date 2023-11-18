#pragma once
#include <Modloader/app/structs/SandWormEntity_EnableVerletTentacles_d_185.h>
#include <Modloader/app/structs/SandWormEntity_EnableVerletTentacles_d_185__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_EnableVerletTentacles_d_185 {
        inline app::SandWormEntity_EnableVerletTentacles_d_185__Class** type_info() {
            static app::SandWormEntity_EnableVerletTentacles_d_185__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SandWormEntity_EnableVerletTentacles_d_185__Class**)(modloader::win::memory::resolve_rva(0x0475DE10));
            }
            return cache;
        }
        inline app::SandWormEntity_EnableVerletTentacles_d_185__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_EnableVerletTentacles_d_185__Class>(type_info(), "", "SandWormEntity", "<EnableVerletTentacles>d__185");
        }
        inline app::SandWormEntity_EnableVerletTentacles_d_185* create() {
            return il2cpp::create_object<app::SandWormEntity_EnableVerletTentacles_d_185>(get_class());
        }
    } // namespace SandWormEntity_EnableVerletTentacles_d_185
} // namespace app::classes::types
