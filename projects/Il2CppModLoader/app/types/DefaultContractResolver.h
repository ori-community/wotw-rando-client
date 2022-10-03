#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultContractResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultContractResolver__Class** type_info;
        inline app::DefaultContractResolver__Class* get_class() {
            return il2cpp::get_class<app::DefaultContractResolver__Class>(type_info, "Newtonsoft.Json.Serialization", "DefaultContractResolver");
        }
        inline app::DefaultContractResolver* create() {
            return il2cpp::create_object<app::DefaultContractResolver>(get_class());
        }
    } // namespace DefaultContractResolver
} // namespace app::classes::types
