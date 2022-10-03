#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAnimationSystemSwitcher {
        namespace {
            app::SeinAnimationSystemSwitcher__Class* type_info_ref = nullptr;
        }
        app::SeinAnimationSystemSwitcher__Class** type_info = &type_info_ref;
        inline app::SeinAnimationSystemSwitcher__Class* get_class() {
            return il2cpp::get_class<app::SeinAnimationSystemSwitcher__Class>(type_info, "", "SeinAnimationSystemSwitcher");
        }
        inline app::SeinAnimationSystemSwitcher* create() {
            return il2cpp::create_object<app::SeinAnimationSystemSwitcher>(get_class());
        }
    } // namespace SeinAnimationSystemSwitcher
} // namespace app::classes::types
