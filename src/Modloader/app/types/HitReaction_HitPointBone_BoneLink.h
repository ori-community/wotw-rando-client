#pragma once
#include <Modloader/app/structs/HitReaction_HitPointBone_BoneLink.h>
#include <Modloader/app/structs/HitReaction_HitPointBone_BoneLink__Array.h>
#include <Modloader/app/structs/HitReaction_HitPointBone_BoneLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReaction_HitPointBone_BoneLink {
        inline app::HitReaction_HitPointBone_BoneLink__Class** type_info() {
            static app::HitReaction_HitPointBone_BoneLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReaction_HitPointBone_BoneLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReaction_HitPointBone_BoneLink__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReaction_HitPointBone_BoneLink__Class>(type_info(), "RootMotion.FinalIK", "HitReaction+HitPointBone", "BoneLink");
        }
        inline app::HitReaction_HitPointBone_BoneLink* create() {
            return il2cpp::create_object<app::HitReaction_HitPointBone_BoneLink>(get_class());
        }
        inline app::HitReaction_HitPointBone_BoneLink__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReaction_HitPointBone_BoneLink__Array>(get_class(), size);
        }
        inline app::HitReaction_HitPointBone_BoneLink__Array* create_array(const std::vector<app::HitReaction_HitPointBone_BoneLink*>& items) {
            return il2cpp::array_new<app::HitReaction_HitPointBone_BoneLink__Array>(get_class(), items);
        }
    } // namespace HitReaction_HitPointBone_BoneLink
} // namespace app::classes::types
