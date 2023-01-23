#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart__Array.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_EscapePart__Array {
        namespace {
            inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour+EscapePart[]");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_EscapePart__Array>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_EscapePart__Array
} // namespace app::classes::types
