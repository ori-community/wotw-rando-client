#pragma once
#include <Modloader/app/structs/DoorAnimator.h>
#include <Modloader/app/structs/DoorAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoorAnimator {
        inline app::DoorAnimator__Class** type_info() {
            static app::DoorAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DoorAnimator__Class**)(modloader::win::memory::resolve_rva(0x04748430));
            }
            return cache;
        }
        inline app::DoorAnimator__Class* get_class() {
            return il2cpp::get_class<app::DoorAnimator__Class>(type_info(), "", "DoorAnimator");
        }
        inline app::DoorAnimator* create() {
            return il2cpp::create_object<app::DoorAnimator>(get_class());
        }
    } // namespace DoorAnimator
} // namespace app::classes::types
