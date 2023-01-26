#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart__Array.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_EscapePart__Array {
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class** type_info() {
            static app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class>(type_info(), "", "PetrifiedOwlBossEscape1Behaviour+EscapePart[]");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_EscapePart__Array
} // namespace app::classes::types
