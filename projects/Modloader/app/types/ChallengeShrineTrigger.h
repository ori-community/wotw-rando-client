#pragma once
#include <Modloader/app/structs/ChallengeShrineTrigger.h>
#include <Modloader/app/structs/ChallengeShrineTrigger__Array.h>
#include <Modloader/app/structs/ChallengeShrineTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineTrigger {
        inline app::ChallengeShrineTrigger__Class** type_info() {
            static app::ChallengeShrineTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChallengeShrineTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChallengeShrineTrigger__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineTrigger__Class>(type_info(), "", "ChallengeShrineTrigger");
        }
        inline app::ChallengeShrineTrigger* create() {
            return il2cpp::create_object<app::ChallengeShrineTrigger>(get_class());
        }
        inline app::ChallengeShrineTrigger__Array* create_array(int size) {
            return il2cpp::array_new<app::ChallengeShrineTrigger__Array>(get_class(), size);
        }
        inline app::ChallengeShrineTrigger__Array* create_array(const std::vector<app::ChallengeShrineTrigger*>& items) {
            return il2cpp::array_new<app::ChallengeShrineTrigger__Array>(get_class(), items);
        }
    } // namespace ChallengeShrineTrigger
} // namespace app::classes::types
