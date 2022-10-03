#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JPropertyKeyedCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JPropertyKeyedCollection__Class** type_info;
        inline app::JPropertyKeyedCollection__Class* get_class() {
            return il2cpp::get_class<app::JPropertyKeyedCollection__Class>(type_info, "Newtonsoft.Json.Linq", "JPropertyKeyedCollection");
        }
        inline app::JPropertyKeyedCollection* create() {
            return il2cpp::create_object<app::JPropertyKeyedCollection>(get_class());
        }
    } // namespace JPropertyKeyedCollection
} // namespace app::classes::types
