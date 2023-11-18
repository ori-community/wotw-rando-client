#pragma once
#include <Modloader/app/structs/SandWormChaseBehaviour.h>
#include <Modloader/app/structs/SandWormChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormChaseBehaviour {
        inline app::SandWormChaseBehaviour__Class** type_info() {
            static app::SandWormChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormChaseBehaviour__Class>(type_info(), "", "SandWormChaseBehaviour");
        }
        inline app::SandWormChaseBehaviour* create() {
            return il2cpp::create_object<app::SandWormChaseBehaviour>(get_class());
        }
    } // namespace SandWormChaseBehaviour
} // namespace app::classes::types
