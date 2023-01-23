#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IKMappingLimb_BoneMapType__Enum__Class.h>
#include <Modloader/app/structs/IKMappingLimb_BoneMapType__Enum.h>

namespace app::classes::types {
    namespace IKMappingLimb_BoneMapType__Enum {
        namespace {
            inline app::IKMappingLimb_BoneMapType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::IKMappingLimb_BoneMapType__Enum__Class** type_info = &type_info_ref;
        inline app::IKMappingLimb_BoneMapType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::IKMappingLimb_BoneMapType__Enum__Class>(type_info, "RootMotion.FinalIK", "IKMappingLimb", "BoneMapType");
        }
        inline app::IKMappingLimb_BoneMapType__Enum* create() {
            return il2cpp::create_object<app::IKMappingLimb_BoneMapType__Enum>(get_class());
        }
    } // namespace IKMappingLimb_BoneMapType__Enum
} // namespace app::classes::types
