#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicDataResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicDataResolver__Class** type_info;
        inline app::DynamicDataResolver__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataResolver__Class>(type_info, "Moon", "DynamicDataResolver");
        }
        inline app::DynamicDataResolver* create() {
            return il2cpp::create_object<app::DynamicDataResolver>(get_class());
        }
    } // namespace DynamicDataResolver
} // namespace app::classes::types
