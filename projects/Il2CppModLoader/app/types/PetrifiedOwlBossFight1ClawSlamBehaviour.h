#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1ClawSlamBehaviour {
        inline app::PetrifiedOwlBossFight1ClawSlamBehaviour__Class** type_info = (app::PetrifiedOwlBossFight1ClawSlamBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0478ECF8));
        inline app::PetrifiedOwlBossFight1ClawSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1ClawSlamBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1ClawSlamBehaviour");
        }
        inline app::PetrifiedOwlBossFight1ClawSlamBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1ClawSlamBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1ClawSlamBehaviour
} // namespace app::classes::types
