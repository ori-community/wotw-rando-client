#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1SideShriekBehaviour {
        inline app::PetrifiedOwlBossFight1SideShriekBehaviour__Class** type_info = (app::PetrifiedOwlBossFight1SideShriekBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04714F90));
        inline app::PetrifiedOwlBossFight1SideShriekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1SideShriekBehaviour__Class>(type_info, "", "PetrifiedOwlBossFight1SideShriekBehaviour");
        }
        inline app::PetrifiedOwlBossFight1SideShriekBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1SideShriekBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1SideShriekBehaviour
} // namespace app::classes::types
