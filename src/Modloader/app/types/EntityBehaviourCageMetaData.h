#pragma once
#include <Modloader/app/structs/EntityBehaviourCageMetaData.h>
#include <Modloader/app/structs/EntityBehaviourCageMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviourCageMetaData {
        inline app::EntityBehaviourCageMetaData__Class** type_info() {
            static app::EntityBehaviourCageMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityBehaviourCageMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityBehaviourCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourCageMetaData__Class>(type_info(), "", "EntityBehaviourCageMetaData");
        }
        inline app::EntityBehaviourCageMetaData* create() {
            return il2cpp::create_object<app::EntityBehaviourCageMetaData>(get_class());
        }
    } // namespace EntityBehaviourCageMetaData
} // namespace app::classes::types
