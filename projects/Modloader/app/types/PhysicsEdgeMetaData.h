#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicsEdgeMetaData__Class.h>
#include <Modloader/app/structs/PhysicsEdgeMetaData.h>

namespace app::classes::types {
    namespace PhysicsEdgeMetaData {
        namespace {
            inline app::PhysicsEdgeMetaData__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsEdgeMetaData__Class** type_info = &type_info_ref;
        inline app::PhysicsEdgeMetaData__Class* get_class() {
            return il2cpp::get_class<app::PhysicsEdgeMetaData__Class>(type_info, "", "PhysicsEdgeMetaData");
        }
        inline app::PhysicsEdgeMetaData* create() {
            return il2cpp::create_object<app::PhysicsEdgeMetaData>(get_class());
        }
    } // namespace PhysicsEdgeMetaData
} // namespace app::classes::types
