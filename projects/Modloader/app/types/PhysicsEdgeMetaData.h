#pragma once
#include <Modloader/app/structs/PhysicsEdgeMetaData.h>
#include <Modloader/app/structs/PhysicsEdgeMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsEdgeMetaData {
        inline app::PhysicsEdgeMetaData__Class** type_info() {
            static app::PhysicsEdgeMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicsEdgeMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicsEdgeMetaData__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEdgeMetaData__Class>(type_info(), "", "PhysicsEdgeMetaData");
        }
        inline app::PhysicsEdgeMetaData* create() {
            return il2cpp::create_object<app::PhysicsEdgeMetaData>(get_class());
        }
    } // namespace PhysicsEdgeMetaData
} // namespace app::classes::types
