#pragma once
#include <Modloader/app/structs/SandWormReturnToSandBehaviour.h>
#include <Modloader/app/structs/SandWormReturnToSandBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormReturnToSandBehaviour {
        inline app::SandWormReturnToSandBehaviour__Class** type_info() {
            static app::SandWormReturnToSandBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormReturnToSandBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormReturnToSandBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormReturnToSandBehaviour__Class>(type_info(), "", "SandWormReturnToSandBehaviour");
        }
        inline app::SandWormReturnToSandBehaviour* create() {
            return il2cpp::create_object<app::SandWormReturnToSandBehaviour>(get_class());
        }
    } // namespace SandWormReturnToSandBehaviour
} // namespace app::classes::types
