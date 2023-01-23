#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates {
        inline app::PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__Class** type_info = (app::PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__Class**)(modloader::win::memory::resolve_rva(0x04726928));
        inline app::PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates__Class>(type_info, "", "PetrifiedOwlBossEscape1Behaviour", "Escape1ComboStates");
        }
        inline app::PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates>(get_class());
        }
    } // namespace PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates
} // namespace app::classes::types
