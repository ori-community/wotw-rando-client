#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart__Array.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_EscapePart {
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class** type_info() {
            static app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class>(type_info(), "", "PetrifiedOwlBossEscape1Behaviour", "EscapePart");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_EscapePart>(get_class());
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array* create_array(int size) {
            return il2cpp::array_new<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array>(get_class(), size);
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array* create_array(const std::vector<app::PetrifiedOwlBossEscape1Behaviour_EscapePart*>& items) {
            return il2cpp::array_new<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array>(get_class(), items);
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_EscapePart
} // namespace app::classes::types
