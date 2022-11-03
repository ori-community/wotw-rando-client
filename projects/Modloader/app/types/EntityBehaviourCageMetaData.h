#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityBehaviourCageMetaData {
        namespace {
            inline app::EntityBehaviourCageMetaData__Class* type_info_ref = nullptr;
        }
        inline app::EntityBehaviourCageMetaData__Class** type_info = &type_info_ref;
        inline app::EntityBehaviourCageMetaData__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourCageMetaData__Class>(type_info, "", "EntityBehaviourCageMetaData");
        }
        inline app::EntityBehaviourCageMetaData* create() {
            return il2cpp::create_object<app::EntityBehaviourCageMetaData>(get_class());
        }
    } // namespace EntityBehaviourCageMetaData
} // namespace app::classes::types
