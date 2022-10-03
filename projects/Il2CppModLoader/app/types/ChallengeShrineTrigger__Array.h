#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineTrigger__Array {
        namespace {
            app::ChallengeShrineTrigger__Array__Class* type_info_ref = nullptr;
        }
        app::ChallengeShrineTrigger__Array__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineTrigger__Array__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineTrigger__Array__Class>(type_info, "", "ChallengeShrineTrigger[]");
        }
        inline app::ChallengeShrineTrigger__Array* create() {
            return il2cpp::create_object<app::ChallengeShrineTrigger__Array>(get_class());
        }
    } // namespace ChallengeShrineTrigger__Array
} // namespace app::classes::types
