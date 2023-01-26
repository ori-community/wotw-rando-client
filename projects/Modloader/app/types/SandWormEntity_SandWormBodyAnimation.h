#pragma once
#include <Modloader/app/structs/SandWormEntity_SandWormBodyAnimation.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_SandWormBodyAnimation {
        inline app::SandWormEntity_SandWormBodyAnimation__Class** type_info() {
            static app::SandWormEntity_SandWormBodyAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormEntity_SandWormBodyAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormEntity_SandWormBodyAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_SandWormBodyAnimation__Class>(type_info(), "", "SandWormEntity", "SandWormBodyAnimation");
        }
        inline app::SandWormEntity_SandWormBodyAnimation* create() {
            return il2cpp::create_object<app::SandWormEntity_SandWormBodyAnimation>(get_class());
        }
    } // namespace SandWormEntity_SandWormBodyAnimation
} // namespace app::classes::types
