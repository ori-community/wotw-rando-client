#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKMappingLimb__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKMappingLimb__Array__Class** type_info;
        inline app::IKMappingLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::IKMappingLimb__Array__Class>(type_info, "RootMotion.FinalIK", "IKMappingLimb[]");
        }
        inline app::IKMappingLimb__Array* create() {
            return il2cpp::create_object<app::IKMappingLimb__Array>(get_class());
        }
    } // namespace IKMappingLimb__Array
} // namespace app::classes::types
