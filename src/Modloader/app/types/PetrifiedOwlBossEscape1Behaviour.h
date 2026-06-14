#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour {
        inline app::PetrifiedOwlBossEscape1Behaviour__Class** type_info() {
            static app::PetrifiedOwlBossEscape1Behaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossEscape1Behaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossEscape1Behaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossEscape1Behaviour__Class>(type_info(), "", "PetrifiedOwlBossEscape1Behaviour");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour
} // namespace app::classes::types
