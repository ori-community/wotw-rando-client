#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_EscapePart {
        namespace {
            inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour", "EscapePart");
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
