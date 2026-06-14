#pragma once
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/IMoonSetupAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonSetupAnimator {
        inline app::IMoonSetupAnimator__Class** type_info() {
            static app::IMoonSetupAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonSetupAnimator__Class**)(modloader::win::memory::resolve_rva(0x0475CF80));
            }
            return cache;
        }
        inline app::IMoonSetupAnimator__Class* get_class() {
            return il2cpp::get_class<app::IMoonSetupAnimator__Class>(type_info(), "", "IMoonSetupAnimator");
        }
    } // namespace IMoonSetupAnimator
} // namespace app::classes::types
