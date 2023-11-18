#pragma once
#include <Modloader/app/structs/BehaviourParameter.h>
#include <Modloader/app/structs/BehaviourParameter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourParameter {
        inline app::BehaviourParameter__Class** type_info() {
            static app::BehaviourParameter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BehaviourParameter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BehaviourParameter__Class* get_class() {
            return il2cpp::get_class<app::BehaviourParameter__Class>(type_info(), "Moon.BehaviourSystem", "BehaviourParameter");
        }
        inline app::BehaviourParameter* create() {
            return il2cpp::create_object<app::BehaviourParameter>(get_class());
        }
    } // namespace BehaviourParameter
} // namespace app::classes::types
