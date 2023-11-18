#pragma once
#include <Modloader/app/structs/AlwaysTrueCondition.h>
#include <Modloader/app/structs/AlwaysTrueCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlwaysTrueCondition {
        inline app::AlwaysTrueCondition__Class** type_info() {
            static app::AlwaysTrueCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlwaysTrueCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlwaysTrueCondition__Class* get_class() {
            return il2cpp::get_class<app::AlwaysTrueCondition__Class>(type_info(), "Moon.InteractionGraph", "AlwaysTrueCondition");
        }
        inline app::AlwaysTrueCondition* create() {
            return il2cpp::create_object<app::AlwaysTrueCondition>(get_class());
        }
    } // namespace AlwaysTrueCondition
} // namespace app::classes::types
