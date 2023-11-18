#pragma once
#include <Modloader/app/structs/AbilityIconCollection.h>
#include <Modloader/app/structs/AbilityIconCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbilityIconCollection {
        inline app::AbilityIconCollection__Class** type_info() {
            static app::AbilityIconCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AbilityIconCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AbilityIconCollection__Class* get_class() {
            return il2cpp::get_class<app::AbilityIconCollection__Class>(type_info(), "", "AbilityIconCollection");
        }
        inline app::AbilityIconCollection* create() {
            return il2cpp::create_object<app::AbilityIconCollection>(get_class());
        }
    } // namespace AbilityIconCollection
} // namespace app::classes::types
