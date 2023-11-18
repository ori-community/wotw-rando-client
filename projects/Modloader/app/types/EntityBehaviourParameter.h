#pragma once
#include <Modloader/app/structs/EntityBehaviourParameter.h>
#include <Modloader/app/structs/EntityBehaviourParameter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviourParameter {
        inline app::EntityBehaviourParameter__Class** type_info() {
            static app::EntityBehaviourParameter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityBehaviourParameter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityBehaviourParameter__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourParameter__Class>(type_info(), "Moon", "EntityBehaviourParameter");
        }
        inline app::EntityBehaviourParameter* create() {
            return il2cpp::create_object<app::EntityBehaviourParameter>(get_class());
        }
    } // namespace EntityBehaviourParameter
} // namespace app::classes::types
