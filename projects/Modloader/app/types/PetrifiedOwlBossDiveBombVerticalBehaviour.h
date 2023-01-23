#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour {
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class** type_info = (app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04716968));
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class>(type_info, "", "PetrifiedOwlBossDiveBombVerticalBehaviour");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour
} // namespace app::classes::types
