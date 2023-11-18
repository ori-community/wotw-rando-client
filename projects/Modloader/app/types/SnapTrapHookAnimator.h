#pragma once
#include <Modloader/app/structs/SnapTrapHookAnimator.h>
#include <Modloader/app/structs/SnapTrapHookAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnapTrapHookAnimator {
        inline app::SnapTrapHookAnimator__Class** type_info() {
            static app::SnapTrapHookAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SnapTrapHookAnimator__Class**)(modloader::win::memory::resolve_rva(0x04766A30));
            }
            return cache;
        }
        inline app::SnapTrapHookAnimator__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookAnimator__Class>(type_info(), "", "SnapTrapHookAnimator");
        }
        inline app::SnapTrapHookAnimator* create() {
            return il2cpp::create_object<app::SnapTrapHookAnimator>(get_class());
        }
    } // namespace SnapTrapHookAnimator
} // namespace app::classes::types
