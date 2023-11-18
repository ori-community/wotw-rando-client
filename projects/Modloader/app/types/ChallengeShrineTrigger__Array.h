#pragma once
#include <Modloader/app/structs/ChallengeShrineTrigger__Array.h>
#include <Modloader/app/structs/ChallengeShrineTrigger__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineTrigger__Array {
        inline app::ChallengeShrineTrigger__Array__Class** type_info() {
            static app::ChallengeShrineTrigger__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChallengeShrineTrigger__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChallengeShrineTrigger__Array__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineTrigger__Array__Class>(type_info(), "", "ChallengeShrineTrigger[]");
        }
        inline app::ChallengeShrineTrigger__Array* create() {
            return il2cpp::create_object<app::ChallengeShrineTrigger__Array>(get_class());
        }
    } // namespace ChallengeShrineTrigger__Array
} // namespace app::classes::types
