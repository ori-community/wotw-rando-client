#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityWeightResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityWeightResolver__Class** type_info;
        inline app::EntityWeightResolver__Class* get_class() {
            return il2cpp::get_class<app::EntityWeightResolver__Class>(type_info, "", "EntityWeightResolver");
        }
        inline app::EntityWeightResolver* create() {
            return il2cpp::create_object<app::EntityWeightResolver>(get_class());
        }
    } // namespace EntityWeightResolver
} // namespace app::classes::types
