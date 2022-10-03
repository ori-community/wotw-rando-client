#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstructionCall {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstructionCall__Class** type_info;
        inline app::ConstructionCall__Class* get_class() {
            return il2cpp::get_class<app::ConstructionCall__Class>(type_info, "System.Runtime.Remoting.Messaging", "ConstructionCall");
        }
        inline app::ConstructionCall* create() {
            return il2cpp::create_object<app::ConstructionCall>(get_class());
        }
    } // namespace ConstructionCall
} // namespace app::classes::types
