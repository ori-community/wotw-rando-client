#pragma once
#include <Modloader/app/structs/DirectionalHitReactionPostprocess.h>
#include <Modloader/app/structs/DirectionalHitReactionPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectionalHitReactionPostprocess {
        inline app::DirectionalHitReactionPostprocess__Class** type_info() {
            static app::DirectionalHitReactionPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DirectionalHitReactionPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DirectionalHitReactionPostprocess__Class* get_class() {
            return il2cpp::get_class<app::DirectionalHitReactionPostprocess__Class>(type_info(), "Moon.Animation", "DirectionalHitReactionPostprocess");
        }
        inline app::DirectionalHitReactionPostprocess* create() {
            return il2cpp::create_object<app::DirectionalHitReactionPostprocess>(get_class());
        }
    } // namespace DirectionalHitReactionPostprocess
} // namespace app::classes::types
