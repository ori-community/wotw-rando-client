#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultReferenceResolver {
        inline app::DefaultReferenceResolver__Class** type_info = (app::DefaultReferenceResolver__Class**)(modloader::win::memory::resolve_rva(0x047682F0));
        inline app::DefaultReferenceResolver__Class* get_class() {
            return il2cpp::get_class<app::DefaultReferenceResolver__Class>(type_info, "Newtonsoft.Json.Serialization", "DefaultReferenceResolver");
        }
        inline app::DefaultReferenceResolver* create() {
            return il2cpp::create_object<app::DefaultReferenceResolver>(get_class());
        }
    } // namespace DefaultReferenceResolver
} // namespace app::classes::types
