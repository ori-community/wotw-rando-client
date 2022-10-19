#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityBehaviourDebugData {
        inline app::EntityBehaviourDebugData__Class** type_info = (app::EntityBehaviourDebugData__Class**)(modloader::win::memory::resolve_rva(0x0478EF58));
        inline app::EntityBehaviourDebugData__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourDebugData__Class>(type_info, "Moon", "EntityBehaviourDebugData");
        }
        inline app::EntityBehaviourDebugData* create() {
            return il2cpp::create_object<app::EntityBehaviourDebugData>(get_class());
        }
    } // namespace EntityBehaviourDebugData
} // namespace app::classes::types
