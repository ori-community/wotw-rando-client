#pragma once
#include <Modloader/app/structs/DashableSwitchAnimator.h>
#include <Modloader/app/structs/DashableSwitchAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchAnimator {
        inline app::DashableSwitchAnimator__Class** type_info() {
            static app::DashableSwitchAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashableSwitchAnimator__Class**)(modloader::win::memory::resolve_rva(0x0476AE48));
            }
            return cache;
        }
        inline app::DashableSwitchAnimator__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchAnimator__Class>(type_info(), "", "DashableSwitchAnimator");
        }
        inline app::DashableSwitchAnimator* create() {
            return il2cpp::create_object<app::DashableSwitchAnimator>(get_class());
        }
    } // namespace DashableSwitchAnimator
} // namespace app::classes::types
