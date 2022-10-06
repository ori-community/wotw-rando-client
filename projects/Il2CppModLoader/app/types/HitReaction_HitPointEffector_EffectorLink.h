#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitReaction_HitPointEffector_EffectorLink {
        namespace {
            app::HitReaction_HitPointEffector_EffectorLink__Class* type_info_ref = nullptr;
        }
        app::HitReaction_HitPointEffector_EffectorLink__Class** type_info = &type_info_ref;
        inline app::HitReaction_HitPointEffector_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReaction_HitPointEffector_EffectorLink__Class>(type_info, "RootMotion.FinalIK", "HitReaction+HitPointEffector", "EffectorLink");
        }
        inline app::HitReaction_HitPointEffector_EffectorLink* create() {
            return il2cpp::create_object<app::HitReaction_HitPointEffector_EffectorLink>(get_class());
        }
        inline app::HitReaction_HitPointEffector_EffectorLink__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReaction_HitPointEffector_EffectorLink__Array>(get_class(), size);
        }
        inline app::HitReaction_HitPointEffector_EffectorLink__Array* create_array(const std::vector<app::HitReaction_HitPointEffector_EffectorLink*>& items) {
            return il2cpp::array_new<app::HitReaction_HitPointEffector_EffectorLink__Array>(get_class(), items);
        }
    } // namespace HitReaction_HitPointEffector_EffectorLink
} // namespace app::classes::types
