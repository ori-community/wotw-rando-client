#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReaction_HitPointBone_BoneLink__Array {
        namespace {
            inline app::HitReaction_HitPointBone_BoneLink__Array__Class* type_info_ref = nullptr;
        }
        inline app::HitReaction_HitPointBone_BoneLink__Array__Class** type_info = &type_info_ref;
        inline app::HitReaction_HitPointBone_BoneLink__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReaction_HitPointBone_BoneLink__Array__Class>(type_info, "RootMotion.FinalIK", "HitReaction+HitPointBone+BoneLink[]");
        }
        inline app::HitReaction_HitPointBone_BoneLink__Array* create() {
            return il2cpp::create_object<app::HitReaction_HitPointBone_BoneLink__Array>(get_class());
        }
    } // namespace HitReaction_HitPointBone_BoneLink__Array
} // namespace app::classes::types
