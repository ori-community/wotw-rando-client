#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultReferenceResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultReferenceResolver__Class** type_info;
        inline app::DefaultReferenceResolver__Class* get_class() {
            return il2cpp::get_class<app::DefaultReferenceResolver__Class>(type_info, "Newtonsoft.Json.Serialization", "DefaultReferenceResolver");
        }
        inline app::DefaultReferenceResolver* create() {
            return il2cpp::create_object<app::DefaultReferenceResolver>(get_class());
        }
    } // namespace DefaultReferenceResolver
} // namespace app::classes::types
