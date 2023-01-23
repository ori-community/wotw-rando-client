#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HitReaction_HitPointBone__Array__Class.h>
#include <Modloader/app/structs/HitReaction_HitPointBone__Array.h>

namespace app::classes::types {
    namespace HitReaction_HitPointBone__Array {
        namespace {
            inline app::HitReaction_HitPointBone__Array__Class* type_info_ref = nullptr;
        }
        inline app::HitReaction_HitPointBone__Array__Class** type_info = &type_info_ref;
        inline app::HitReaction_HitPointBone__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReaction_HitPointBone__Array__Class>(type_info, "RootMotion.FinalIK", "HitReaction+HitPointBone[]");
        }
        inline app::HitReaction_HitPointBone__Array* create() {
            return il2cpp::create_object<app::HitReaction_HitPointBone__Array>(get_class());
        }
    } // namespace HitReaction_HitPointBone__Array
} // namespace app::classes::types
