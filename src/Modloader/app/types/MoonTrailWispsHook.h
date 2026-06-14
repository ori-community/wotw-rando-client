#pragma once
#include <Modloader/app/structs/MoonTrailWispsHook.h>
#include <Modloader/app/structs/MoonTrailWispsHook__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrailWispsHook {
        inline app::MoonTrailWispsHook__Class** type_info() {
            static app::MoonTrailWispsHook__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrailWispsHook__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrailWispsHook__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailWispsHook__Class>(type_info(), "", "MoonTrailWispsHook");
        }
        inline app::MoonTrailWispsHook* create() {
            return il2cpp::create_object<app::MoonTrailWispsHook>(get_class());
        }
    } // namespace MoonTrailWispsHook
} // namespace app::classes::types
