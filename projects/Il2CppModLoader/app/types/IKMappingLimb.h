#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKMappingLimb {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKMappingLimb__Class** type_info;
        inline app::IKMappingLimb__Class* get_class() {
            return il2cpp::get_class<app::IKMappingLimb__Class>(type_info, "RootMotion.FinalIK", "IKMappingLimb");
        }
        inline app::IKMappingLimb* create() {
            return il2cpp::create_object<app::IKMappingLimb>(get_class());
        }
        inline app::IKMappingLimb__Array* create_array(int size) {
            return il2cpp::array_new<app::IKMappingLimb__Array>(get_class(), size);
        }
    } // namespace IKMappingLimb
} // namespace app::classes::types
