#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AbilityIconCollection {
        namespace {
            inline app::AbilityIconCollection__Class* type_info_ref = nullptr;
        }
        inline app::AbilityIconCollection__Class** type_info = &type_info_ref;
        inline app::AbilityIconCollection__Class* get_class() {
            return il2cpp::get_class<app::AbilityIconCollection__Class>(type_info, "", "AbilityIconCollection");
        }
        inline app::AbilityIconCollection* create() {
            return il2cpp::create_object<app::AbilityIconCollection>(get_class());
        }
    } // namespace AbilityIconCollection
} // namespace app::classes::types
