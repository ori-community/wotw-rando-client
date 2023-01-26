#pragma once
#include <Modloader/app/structs/NightBerry.h>
#include <Modloader/app/structs/NightBerry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightBerry {
        inline app::NightBerry__Class** type_info() {
            static app::NightBerry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightBerry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightBerry__Class* get_class() {
            return il2cpp::get_class<app::NightBerry__Class>(type_info(), "", "NightBerry");
        }
        inline app::NightBerry* create() {
            return il2cpp::create_object<app::NightBerry>(get_class());
        }
    } // namespace NightBerry
} // namespace app::classes::types
