#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntitiesTypeDictionary__Class.h>
#include <Modloader/app/structs/EntitiesTypeDictionary.h>

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
