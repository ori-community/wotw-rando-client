#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_EscapePart {
        namespace {
            app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour", "EscapePart");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_EscapePart>(get_class());
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array* create_array(int size) {
            return il2cpp::array_new<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array>(get_class(), size);
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_EscapePart
} // namespace app::classes::types
