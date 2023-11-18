#pragma once
#include <Modloader/app/structs/SandWormThrownBehaviour.h>
#include <Modloader/app/structs/SandWormThrownBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormThrownBehaviour {
        inline app::SandWormThrownBehaviour__Class** type_info() {
            static app::SandWormThrownBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormThrownBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormThrownBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormThrownBehaviour__Class>(type_info(), "", "SandWormThrownBehaviour");
        }
        inline app::SandWormThrownBehaviour* create() {
            return il2cpp::create_object<app::SandWormThrownBehaviour>(get_class());
        }
    } // namespace SandWormThrownBehaviour
} // namespace app::classes::types
