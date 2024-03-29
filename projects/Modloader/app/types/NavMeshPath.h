#pragma once
#include <Modloader/app/structs/NavMeshPath.h>
#include <Modloader/app/structs/NavMeshPath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavMeshPath {
        inline app::NavMeshPath__Class** type_info() {
            static app::NavMeshPath__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NavMeshPath__Class**)(modloader::win::memory::resolve_rva(0x04712E40));
            }
            return cache;
        }
        inline app::NavMeshPath__Class* get_class() {
            return il2cpp::get_class<app::NavMeshPath__Class>(type_info(), "UnityEngine.AI", "NavMeshPath");
        }
        inline app::NavMeshPath* create() {
            return il2cpp::create_object<app::NavMeshPath>(get_class());
        }
    } // namespace NavMeshPath
} // namespace app::classes::types
