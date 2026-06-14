#pragma once
#include <Modloader/app/structs/HitReactionTrigger.h>
#include <Modloader/app/structs/HitReactionTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionTrigger {
        inline app::HitReactionTrigger__Class** type_info() {
            static app::HitReactionTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReactionTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReactionTrigger__Class* get_class() {
            return il2cpp::get_class<app::HitReactionTrigger__Class>(type_info(), "RootMotion.Demos", "HitReactionTrigger");
        }
        inline app::HitReactionTrigger* create() {
            return il2cpp::create_object<app::HitReactionTrigger>(get_class());
        }
    } // namespace HitReactionTrigger
} // namespace app::classes::types
