#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1SideSpitBehaviour {
        inline app::PetrifiedOwlBossFight1SideSpitBehaviour__Class** type_info = (app::PetrifiedOwlBossFight1SideSpitBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0476A418));
        inline app::PetrifiedOwlBossFight1SideSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1SideSpitBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1SideSpitBehaviour");
        }
        inline app::PetrifiedOwlBossFight1SideSpitBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1SideSpitBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1SideSpitBehaviour
} // namespace app::classes::types
