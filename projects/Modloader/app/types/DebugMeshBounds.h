#pragma once
#include <Modloader/app/structs/DebugMeshBounds.h>
#include <Modloader/app/structs/DebugMeshBounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugMeshBounds {
        inline app::DebugMeshBounds__Class** type_info() {
            static app::DebugMeshBounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugMeshBounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugMeshBounds__Class* get_class() {
            return il2cpp::get_class<app::DebugMeshBounds__Class>(type_info(), "", "DebugMeshBounds");
        }
        inline app::DebugMeshBounds* create() {
            return il2cpp::create_object<app::DebugMeshBounds>(get_class());
        }
    } // namespace DebugMeshBounds
} // namespace app::classes::types
