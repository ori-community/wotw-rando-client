#pragma once
#include <Modloader/app/structs/AnyConditions.h>
#include <Modloader/app/structs/AnyConditions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnyConditions {
        inline app::AnyConditions__Class** type_info() {
            static app::AnyConditions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnyConditions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnyConditions__Class* get_class() {
            return il2cpp::get_class<app::AnyConditions__Class>(type_info(), "Moon.InteractionGraph", "AnyConditions");
        }
        inline app::AnyConditions* create() {
            return il2cpp::create_object<app::AnyConditions>(get_class());
        }
    } // namespace AnyConditions
} // namespace app::classes::types
