#pragma once
#include <Modloader/app/structs/AreaMapObjectiveArrow.h>
#include <Modloader/app/structs/AreaMapObjectiveArrow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapObjectiveArrow {
        inline app::AreaMapObjectiveArrow__Class** type_info() {
            static app::AreaMapObjectiveArrow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapObjectiveArrow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapObjectiveArrow__Class* get_class() {
            return il2cpp::get_class<app::AreaMapObjectiveArrow__Class>(type_info(), "", "AreaMapObjectiveArrow");
        }
        inline app::AreaMapObjectiveArrow* create() {
            return il2cpp::create_object<app::AreaMapObjectiveArrow>(get_class());
        }
    } // namespace AreaMapObjectiveArrow
} // namespace app::classes::types
