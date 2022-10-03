#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultContractResolver_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultContractResolver_c__Class** type_info;
        inline app::DefaultContractResolver_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultContractResolver_c__Class>(type_info, "Newtonsoft.Json.Serialization", "DefaultContractResolver", "<>c");
        }
        inline app::DefaultContractResolver_c* create() {
            return il2cpp::create_object<app::DefaultContractResolver_c>(get_class());
        }
    } // namespace DefaultContractResolver_c
} // namespace app::classes::types
