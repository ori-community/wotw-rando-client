#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FBBIKHeadEffector_BendBone__Class.h>
#include <Modloader/app/structs/FBBIKHeadEffector_BendBone.h>
#include <Modloader/app/structs/FBBIKHeadEffector_BendBone__Array.h>

namespace app::classes::types {
    namespace FBBIKHeadEffector_BendBone {
        namespace {
            inline app::FBBIKHeadEffector_BendBone__Class* type_info_ref = nullptr;
        }
        inline app::FBBIKHeadEffector_BendBone__Class** type_info = &type_info_ref;
        inline app::FBBIKHeadEffector_BendBone__Class* get_class() {
            return il2cpp::get_nested_class<app::FBBIKHeadEffector_BendBone__Class>(type_info, "RootMotion.FinalIK", "FBBIKHeadEffector", "BendBone");
        }
        inline app::FBBIKHeadEffector_BendBone* create() {
            return il2cpp::create_object<app::FBBIKHeadEffector_BendBone>(get_class());
        }
        inline app::FBBIKHeadEffector_BendBone__Array* create_array(int size) {
            return il2cpp::array_new<app::FBBIKHeadEffector_BendBone__Array>(get_class(), size);
        }
        inline app::FBBIKHeadEffector_BendBone__Array* create_array(const std::vector<app::FBBIKHeadEffector_BendBone*>& items) {
            return il2cpp::array_new<app::FBBIKHeadEffector_BendBone__Array>(get_class(), items);
        }
    } // namespace FBBIKHeadEffector_BendBone
} // namespace app::classes::types
