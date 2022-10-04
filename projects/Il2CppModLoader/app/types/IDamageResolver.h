#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDamageResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDamageResolver__Class** type_info;
        inline app::IDamageResolver__Class* get_class() {
            return il2cpp::get_class<app::IDamageResolver__Class>(type_info, "Moon", "IDamageResolver");
        }
        inline app::IDamageResolver* create() {
            return il2cpp::create_object<app::IDamageResolver>(get_class());
        }
    } // namespace IDamageResolver
} // namespace app::classes::types
