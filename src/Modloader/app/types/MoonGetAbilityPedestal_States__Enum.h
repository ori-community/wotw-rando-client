#pragma once
#include <Modloader/app/structs/MoonGetAbilityPedestal_States__Enum.h>
#include <Modloader/app/structs/MoonGetAbilityPedestal_States__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonGetAbilityPedestal_States__Enum {
        inline app::MoonGetAbilityPedestal_States__Enum__Class** type_info() {
            static app::MoonGetAbilityPedestal_States__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonGetAbilityPedestal_States__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonGetAbilityPedestal_States__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonGetAbilityPedestal_States__Enum__Class>(type_info(), "", "MoonGetAbilityPedestal", "States");
        }
        inline app::MoonGetAbilityPedestal_States__Enum* create() {
            return il2cpp::create_object<app::MoonGetAbilityPedestal_States__Enum>(get_class());
        }
    } // namespace MoonGetAbilityPedestal_States__Enum
} // namespace app::classes::types
