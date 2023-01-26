#pragma once
#include <Modloader/app/structs/EntityBehaviourDebugData.h>
#include <Modloader/app/structs/EntityBehaviourDebugData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviourDebugData {
        inline app::EntityBehaviourDebugData__Class** type_info() {
            static app::EntityBehaviourDebugData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityBehaviourDebugData__Class**)(modloader::win::memory::resolve_rva(0x0478EF58));
            }
            return cache;
        }
        inline app::EntityBehaviourDebugData__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourDebugData__Class>(type_info(), "Moon", "EntityBehaviourDebugData");
        }
        inline app::EntityBehaviourDebugData* create() {
            return il2cpp::create_object<app::EntityBehaviourDebugData>(get_class());
        }
    } // namespace EntityBehaviourDebugData
} // namespace app::classes::types
