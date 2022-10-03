#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReaction_HitPointBone_BoneLink {
        namespace {
            app::HitReaction_HitPointBone_BoneLink__Class* type_info_ref = nullptr;
        }
        app::HitReaction_HitPointBone_BoneLink__Class** type_info = &type_info_ref;
        inline app::HitReaction_HitPointBone_BoneLink__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReaction_HitPointBone_BoneLink__Class>(type_info, "RootMotion.FinalIK", "HitReaction+HitPointBone", "BoneLink");
        }
        inline app::HitReaction_HitPointBone_BoneLink* create() {
            return il2cpp::create_object<app::HitReaction_HitPointBone_BoneLink>(get_class());
        }
        inline app::HitReaction_HitPointBone_BoneLink__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReaction_HitPointBone_BoneLink__Array>(get_class(), size);
        }
    } // namespace HitReaction_HitPointBone_BoneLink
} // namespace app::classes::types
