#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1SideSpitBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1SideSpitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1SideSpitBehaviour {
        inline app::PetrifiedOwlBossFight1SideSpitBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFight1SideSpitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1SideSpitBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0476A418));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1SideSpitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1SideSpitBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFight1SideSpitBehaviour");
        }
        inline app::PetrifiedOwlBossFight1SideSpitBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1SideSpitBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1SideSpitBehaviour
} // namespace app::classes::types
