#pragma once
#include <Modloader/app/structs/GroundMoveInDirectionBehaviour.h>
#include <Modloader/app/structs/GroundMoveInDirectionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundMoveInDirectionBehaviour {
        inline app::GroundMoveInDirectionBehaviour__Class** type_info() {
            static app::GroundMoveInDirectionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundMoveInDirectionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundMoveInDirectionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundMoveInDirectionBehaviour__Class>(type_info(), "Moon", "GroundMoveInDirectionBehaviour");
        }
        inline app::GroundMoveInDirectionBehaviour* create() {
            return il2cpp::create_object<app::GroundMoveInDirectionBehaviour>(get_class());
        }
    } // namespace GroundMoveInDirectionBehaviour
} // namespace app::classes::types
