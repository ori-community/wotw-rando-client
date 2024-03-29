#pragma once
#include <Modloader/app/structs/GrounderQuadruped_Foot__Array.h>
#include <Modloader/app/structs/GrounderQuadruped_Foot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrounderQuadruped_Foot__Array {
        inline app::GrounderQuadruped_Foot__Array__Class** type_info() {
            static app::GrounderQuadruped_Foot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrounderQuadruped_Foot__Array__Class**)(modloader::win::memory::resolve_rva(0x0476EFD0));
            }
            return cache;
        }
        inline app::GrounderQuadruped_Foot__Array__Class* get_class() {
            return il2cpp::get_class<app::GrounderQuadruped_Foot__Array__Class>(type_info(), "RootMotion.FinalIK", "GrounderQuadruped+Foot[]");
        }
        inline app::GrounderQuadruped_Foot__Array* create() {
            return il2cpp::create_object<app::GrounderQuadruped_Foot__Array>(get_class());
        }
    } // namespace GrounderQuadruped_Foot__Array
} // namespace app::classes::types
