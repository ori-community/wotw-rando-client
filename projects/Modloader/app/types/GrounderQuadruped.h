#pragma once
#include <Modloader/app/structs/GrounderQuadruped.h>
#include <Modloader/app/structs/GrounderQuadruped__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrounderQuadruped {
        inline app::GrounderQuadruped__Class** type_info() {
            static app::GrounderQuadruped__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrounderQuadruped__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrounderQuadruped__Class* get_class() {
            return il2cpp::get_class<app::GrounderQuadruped__Class>(type_info(), "RootMotion.FinalIK", "GrounderQuadruped");
        }
        inline app::GrounderQuadruped* create() {
            return il2cpp::create_object<app::GrounderQuadruped>(get_class());
        }
    } // namespace GrounderQuadruped
} // namespace app::classes::types
