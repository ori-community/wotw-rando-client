#pragma once
#include <Modloader/app/structs/AnySaveSlotsFilledCondition.h>
#include <Modloader/app/structs/AnySaveSlotsFilledCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnySaveSlotsFilledCondition {
        inline app::AnySaveSlotsFilledCondition__Class** type_info() {
            static app::AnySaveSlotsFilledCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnySaveSlotsFilledCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnySaveSlotsFilledCondition__Class* get_class() {
            return il2cpp::get_class<app::AnySaveSlotsFilledCondition__Class>(type_info(), "", "AnySaveSlotsFilledCondition");
        }
        inline app::AnySaveSlotsFilledCondition* create() {
            return il2cpp::create_object<app::AnySaveSlotsFilledCondition>(get_class());
        }
    } // namespace AnySaveSlotsFilledCondition
} // namespace app::classes::types
