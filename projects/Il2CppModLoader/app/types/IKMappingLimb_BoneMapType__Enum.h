#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKMappingLimb_BoneMapType__Enum {
        namespace {
            app::IKMappingLimb_BoneMapType__Enum__Class* type_info_ref = nullptr;
        }
        app::IKMappingLimb_BoneMapType__Enum__Class** type_info = &type_info_ref;
        inline app::IKMappingLimb_BoneMapType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::IKMappingLimb_BoneMapType__Enum__Class>(type_info, "RootMotion.FinalIK", "IKMappingLimb", "BoneMapType");
        }
        inline app::IKMappingLimb_BoneMapType__Enum* create() {
            return il2cpp::create_object<app::IKMappingLimb_BoneMapType__Enum>(get_class());
        }
    } // namespace IKMappingLimb_BoneMapType__Enum
} // namespace app::classes::types
