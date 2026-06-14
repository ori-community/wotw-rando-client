#pragma once
#include <Modloader/app/structs/SandWormReturnToWaterBehaviour.h>
#include <Modloader/app/structs/SandWormReturnToWaterBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormReturnToWaterBehaviour {
        inline app::SandWormReturnToWaterBehaviour__Class** type_info() {
            static app::SandWormReturnToWaterBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormReturnToWaterBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormReturnToWaterBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormReturnToWaterBehaviour__Class>(type_info(), "", "SandWormReturnToWaterBehaviour");
        }
        inline app::SandWormReturnToWaterBehaviour* create() {
            return il2cpp::create_object<app::SandWormReturnToWaterBehaviour>(get_class());
        }
    } // namespace SandWormReturnToWaterBehaviour
} // namespace app::classes::types
