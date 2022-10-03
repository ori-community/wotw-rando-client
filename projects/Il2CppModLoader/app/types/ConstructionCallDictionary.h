#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstructionCallDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstructionCallDictionary__Class** type_info;
        inline app::ConstructionCallDictionary__Class* get_class() {
            return il2cpp::get_class<app::ConstructionCallDictionary__Class>(type_info, "System.Runtime.Remoting.Messaging", "ConstructionCallDictionary");
        }
        inline app::ConstructionCallDictionary* create() {
            return il2cpp::create_object<app::ConstructionCallDictionary>(get_class());
        }
    } // namespace ConstructionCallDictionary
} // namespace app::classes::types
