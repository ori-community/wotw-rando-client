#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinAnimationSystemSwitcher__Class.h>
#include <Modloader/app/structs/SeinAnimationSystemSwitcher.h>

namespace app::classes::types {
    namespace SeinAnimationSystemSwitcher {
        namespace {
            inline app::SeinAnimationSystemSwitcher__Class* type_info_ref = nullptr;
        }
        inline app::SeinAnimationSystemSwitcher__Class** type_info = &type_info_ref;
        inline app::SeinAnimationSystemSwitcher__Class* get_class() {
            return il2cpp::get_class<app::SeinAnimationSystemSwitcher__Class>(type_info, "", "SeinAnimationSystemSwitcher");
        }
        inline app::SeinAnimationSystemSwitcher* create() {
            return il2cpp::create_object<app::SeinAnimationSystemSwitcher>(get_class());
        }
    } // namespace SeinAnimationSystemSwitcher
} // namespace app::classes::types
