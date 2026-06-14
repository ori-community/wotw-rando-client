#pragma once
#include <Modloader/app/structs/ReadyForAnimationTrigger.h>
#include <Modloader/app/structs/ReadyForAnimationTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadyForAnimationTrigger {
        inline app::ReadyForAnimationTrigger__Class** type_info() {
            static app::ReadyForAnimationTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReadyForAnimationTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReadyForAnimationTrigger__Class* get_class() {
            return il2cpp::get_class<app::ReadyForAnimationTrigger__Class>(type_info(), "", "ReadyForAnimationTrigger");
        }
        inline app::ReadyForAnimationTrigger* create() {
            return il2cpp::create_object<app::ReadyForAnimationTrigger>(get_class());
        }
    } // namespace ReadyForAnimationTrigger
} // namespace app::classes::types
