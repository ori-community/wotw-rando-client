#pragma once
#include <Modloader/app/structs/SandWormDeathBehaviour.h>
#include <Modloader/app/structs/SandWormDeathBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormDeathBehaviour {
        inline app::SandWormDeathBehaviour__Class** type_info() {
            static app::SandWormDeathBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormDeathBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormDeathBehaviour__Class>(type_info(), "", "SandWormDeathBehaviour");
        }
        inline app::SandWormDeathBehaviour* create() {
            return il2cpp::create_object<app::SandWormDeathBehaviour>(get_class());
        }
    } // namespace SandWormDeathBehaviour
} // namespace app::classes::types
