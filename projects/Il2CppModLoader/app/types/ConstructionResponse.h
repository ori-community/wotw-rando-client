#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstructionResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstructionResponse__Class** type_info;
        inline app::ConstructionResponse__Class* get_class() {
            return il2cpp::get_class<app::ConstructionResponse__Class>(type_info, "System.Runtime.Remoting.Messaging", "ConstructionResponse");
        }
        inline app::ConstructionResponse* create() {
            return il2cpp::create_object<app::ConstructionResponse>(get_class());
        }
    } // namespace ConstructionResponse
} // namespace app::classes::types
