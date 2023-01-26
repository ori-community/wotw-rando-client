#pragma once
#include <Modloader/app/structs/HitReaction_HitPointEffector_EffectorLink.h>
#include <Modloader/app/structs/HitReaction_HitPointEffector_EffectorLink__Array.h>
#include <Modloader/app/structs/HitReaction_HitPointEffector_EffectorLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReaction_HitPointEffector_EffectorLink {
        inline app::HitReaction_HitPointEffector_EffectorLink__Class** type_info() {
            static app::HitReaction_HitPointEffector_EffectorLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReaction_HitPointEffector_EffectorLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReaction_HitPointEffector_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReaction_HitPointEffector_EffectorLink__Class>(type_info(), "RootMotion.FinalIK", "HitReaction+HitPointEffector", "EffectorLink");
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
