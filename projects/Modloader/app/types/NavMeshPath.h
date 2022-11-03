#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NavMeshPath {
        inline app::NavMeshPath__Class** type_info = (app::NavMeshPath__Class**)(modloader::win::memory::resolve_rva(0x04712E40));
        inline app::NavMeshPath__Class* get_class() {
            return il2cpp::get_class<app::NavMeshPath__Class>(type_info, "UnityEngine.AI", "NavMeshPath");
        }
        inline app::NavMeshPath* create() {
            return il2cpp::create_object<app::NavMeshPath>(get_class());
        }
    } // namespace NavMeshPath
} // namespace app::classes::types
