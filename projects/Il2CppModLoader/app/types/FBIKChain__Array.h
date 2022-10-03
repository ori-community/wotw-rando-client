#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FBIKChain__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FBIKChain__Array__Class** type_info;
        inline app::FBIKChain__Array__Class* get_class() {
            return il2cpp::get_class<app::FBIKChain__Array__Class>(type_info, "RootMotion.FinalIK", "FBIKChain[]");
        }
        inline app::FBIKChain__Array* create() {
            return il2cpp::create_object<app::FBIKChain__Array>(get_class());
        }
    } // namespace FBIKChain__Array
} // namespace app::classes::types
