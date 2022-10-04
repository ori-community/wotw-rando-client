#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IReferenceResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IReferenceResolver__Class** type_info;
        inline app::IReferenceResolver__Class* get_class() {
            return il2cpp::get_class<app::IReferenceResolver__Class>(type_info, "Newtonsoft.Json.Serialization", "IReferenceResolver");
        }
    } // namespace IReferenceResolver
} // namespace app::classes::types
