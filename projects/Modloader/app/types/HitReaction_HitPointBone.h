#pragma once
#include <Modloader/app/structs/HitReaction_HitPointBone.h>
#include <Modloader/app/structs/HitReaction_HitPointBone__Array.h>
#include <Modloader/app/structs/HitReaction_HitPointBone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReaction_HitPointBone {
        inline app::HitReaction_HitPointBone__Class** type_info() {
            static app::HitReaction_HitPointBone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReaction_HitPointBone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReaction_HitPointBone__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReaction_HitPointBone__Class>(type_info(), "RootMotion.FinalIK", "HitReaction", "HitPointBone");
        }
        inline app::HitReaction_HitPointBone* create() {
            return il2cpp::create_object<app::HitReaction_HitPointBone>(get_class());
        }
        inline app::HitReaction_HitPointBone__Array* create_array(int size) {
            return il2cpp::array_new<app::HitReaction_HitPointBone__Array>(get_class(), size);
        }
        inline app::HitReaction_HitPointBone__Array* create_array(const std::vector<app::HitReaction_HitPointBone*>& items) {
            return il2cpp::array_new<app::HitReaction_HitPointBone__Array>(get_class(), items);
        }
    } // namespace HitReaction_HitPointBone
} // namespace app::classes::types
