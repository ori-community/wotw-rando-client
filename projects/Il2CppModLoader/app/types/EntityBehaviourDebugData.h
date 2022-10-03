#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviourDebugData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityBehaviourDebugData__Class** type_info;
        inline app::EntityBehaviourDebugData__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourDebugData__Class>(type_info, "Moon", "EntityBehaviourDebugData");
        }
        inline app::EntityBehaviourDebugData* create() {
            return il2cpp::create_object<app::EntityBehaviourDebugData>(get_class());
        }
    } // namespace EntityBehaviourDebugData
} // namespace app::classes::types
