#pragma once
#include <Modloader/app/structs/MoonWater.h>
#include <Modloader/app/structs/MoonWater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonWater {
        inline app::MoonWater__Class** type_info() {
            static app::MoonWater__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonWater__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonWater__Class* get_class() {
            return il2cpp::get_class<app::MoonWater__Class>(type_info(), "", "MoonWater");
        }
        inline app::MoonWater* create() {
            return il2cpp::create_object<app::MoonWater>(get_class());
        }
    } // namespace MoonWater
} // namespace app::classes::types
