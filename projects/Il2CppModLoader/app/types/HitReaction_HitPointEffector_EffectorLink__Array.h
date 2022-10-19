#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReaction_HitPointEffector_EffectorLink__Array {
        namespace {
            inline app::HitReaction_HitPointEffector_EffectorLink__Array__Class* type_info_ref = nullptr;
        }
        inline app::HitReaction_HitPointEffector_EffectorLink__Array__Class** type_info = &type_info_ref;
        inline app::HitReaction_HitPointEffector_EffectorLink__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReaction_HitPointEffector_EffectorLink__Array__Class>(type_info, "RootMotion.FinalIK", "HitReaction+HitPointEffector+EffectorLink[]");
        }
        inline app::HitReaction_HitPointEffector_EffectorLink__Array* create() {
            return il2cpp::create_object<app::HitReaction_HitPointEffector_EffectorLink__Array>(get_class());
        }
    } // namespace HitReaction_HitPointEffector_EffectorLink__Array
} // namespace app::classes::types
