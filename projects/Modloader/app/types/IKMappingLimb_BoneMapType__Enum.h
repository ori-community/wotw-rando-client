#pragma once
#include <Modloader/app/structs/IKMappingLimb_BoneMapType__Enum.h>
#include <Modloader/app/structs/IKMappingLimb_BoneMapType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKMappingLimb_BoneMapType__Enum {
        inline app::IKMappingLimb_BoneMapType__Enum__Class** type_info() {
            static app::IKMappingLimb_BoneMapType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKMappingLimb_BoneMapType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKMappingLimb_BoneMapType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::IKMappingLimb_BoneMapType__Enum__Class>(type_info(), "RootMotion.FinalIK", "IKMappingLimb", "BoneMapType");
        }
        inline app::IKMappingLimb_BoneMapType__Enum* create() {
            return il2cpp::create_object<app::IKMappingLimb_BoneMapType__Enum>(get_class());
        }
    } // namespace IKMappingLimb_BoneMapType__Enum
} // namespace app::classes::types
