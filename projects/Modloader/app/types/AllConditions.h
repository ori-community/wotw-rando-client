#pragma once
#include <Modloader/app/structs/AllConditions.h>
#include <Modloader/app/structs/AllConditions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllConditions {
        inline app::AllConditions__Class** type_info() {
            static app::AllConditions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AllConditions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AllConditions__Class* get_class() {
            return il2cpp::get_class<app::AllConditions__Class>(type_info(), "Moon.InteractionGraph", "AllConditions");
        }
        inline app::AllConditions* create() {
            return il2cpp::create_object<app::AllConditions>(get_class());
        }
    } // namespace AllConditions
} // namespace app::classes::types
