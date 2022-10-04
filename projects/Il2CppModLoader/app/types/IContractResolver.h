#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContractResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContractResolver__Class** type_info;
        inline app::IContractResolver__Class* get_class() {
            return il2cpp::get_class<app::IContractResolver__Class>(type_info, "Newtonsoft.Json.Serialization", "IContractResolver");
        }
    } // namespace IContractResolver
} // namespace app::classes::types
