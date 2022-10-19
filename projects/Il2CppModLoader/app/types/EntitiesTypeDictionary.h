#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntitiesTypeDictionary {
        namespace {
            inline app::EntitiesTypeDictionary__Class* type_info_ref = nullptr;
        }
        inline app::EntitiesTypeDictionary__Class** type_info = &type_info_ref;
        inline app::EntitiesTypeDictionary__Class* get_class() {
            return il2cpp::get_class<app::EntitiesTypeDictionary__Class>(type_info, "Moon", "EntitiesTypeDictionary");
        }
        inline app::EntitiesTypeDictionary* create() {
            return il2cpp::create_object<app::EntitiesTypeDictionary>(get_class());
        }
    } // namespace EntitiesTypeDictionary
} // namespace app::classes::types
