#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_FlyStartState.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_FlyStartState {
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class** type_info = (app::PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class**)(modloader::win::memory::resolve_rva(0x04796368));
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_FlyStartState__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour", "FlyStartState");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_FlyStartState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_FlyStartState>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_FlyStartState
} // namespace app::classes::types
