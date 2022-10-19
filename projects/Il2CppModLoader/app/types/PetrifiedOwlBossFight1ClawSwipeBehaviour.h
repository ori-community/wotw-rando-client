#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1ClawSwipeBehaviour {
        inline app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class** type_info = (app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0478C980));
        inline app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1ClawSwipeBehaviour");
        }
        inline app::PetrifiedOwlBossFight1ClawSwipeBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1ClawSwipeBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1ClawSwipeBehaviour
} // namespace app::classes::types
