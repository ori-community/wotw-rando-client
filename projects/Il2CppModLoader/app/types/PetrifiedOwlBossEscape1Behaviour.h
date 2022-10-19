#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour {
        namespace {
            inline app::PetrifiedOwlBossEscape1Behaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossEscape1Behaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossEscape1Behaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossEscape1Behaviour__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour
} // namespace app::classes::types
