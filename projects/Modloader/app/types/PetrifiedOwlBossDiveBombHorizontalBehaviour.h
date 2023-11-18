#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04732520));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour__Class>(type_info(), "", "PetrifiedOwlBossDiveBombHorizontalBehaviour");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour
} // namespace app::classes::types
