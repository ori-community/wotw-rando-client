#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugMeshBounds__Class.h>
#include <Modloader/app/structs/DebugMeshBounds.h>

namespace app::classes::types {
    namespace DebugMeshBounds {
        namespace {
            inline app::DebugMeshBounds__Class* type_info_ref = nullptr;
        }
        inline app::DebugMeshBounds__Class** type_info = &type_info_ref;
        inline app::DebugMeshBounds__Class* get_class() {
            return il2cpp::get_class<app::DebugMeshBounds__Class>(type_info, "", "DebugMeshBounds");
        }
        inline app::DebugMeshBounds* create() {
            return il2cpp::create_object<app::DebugMeshBounds>(get_class());
        }
    } // namespace DebugMeshBounds
} // namespace app::classes::types
