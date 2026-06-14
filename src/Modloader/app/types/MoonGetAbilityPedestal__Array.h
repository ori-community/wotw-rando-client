#pragma once
#include <Modloader/app/structs/MoonGetAbilityPedestal__Array.h>
#include <Modloader/app/structs/MoonGetAbilityPedestal__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonGetAbilityPedestal__Array {
        inline app::MoonGetAbilityPedestal__Array__Class** type_info() {
            static app::MoonGetAbilityPedestal__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonGetAbilityPedestal__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonGetAbilityPedestal__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonGetAbilityPedestal__Array__Class>(type_info(), "", "MoonGetAbilityPedestal[]");
        }
        inline app::MoonGetAbilityPedestal__Array* create() {
            return il2cpp::create_object<app::MoonGetAbilityPedestal__Array>(get_class());
        }
    } // namespace MoonGetAbilityPedestal__Array
} // namespace app::classes::types
