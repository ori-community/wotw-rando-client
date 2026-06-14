#pragma once
#include <Modloader/app/structs/SeinAnimationSystemSwitcher.h>
#include <Modloader/app/structs/SeinAnimationSystemSwitcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAnimationSystemSwitcher {
        inline app::SeinAnimationSystemSwitcher__Class** type_info() {
            static app::SeinAnimationSystemSwitcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAnimationSystemSwitcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAnimationSystemSwitcher__Class* get_class() {
            return il2cpp::get_class<app::SeinAnimationSystemSwitcher__Class>(type_info(), "", "SeinAnimationSystemSwitcher");
        }
        inline app::SeinAnimationSystemSwitcher* create() {
            return il2cpp::create_object<app::SeinAnimationSystemSwitcher>(get_class());
        }
    } // namespace SeinAnimationSystemSwitcher
} // namespace app::classes::types
