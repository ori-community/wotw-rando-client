#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VFXSpawnerState__Class.h>
#include <Modloader/app/structs/VFXSpawnerState.h>

namespace app::classes::types {
    namespace VFXSpawnerState {
        inline app::VFXSpawnerState__Class** type_info = (app::VFXSpawnerState__Class**)(modloader::win::memory::resolve_rva(0x0478DB78));
        inline app::VFXSpawnerState__Class* get_class() {
            return il2cpp::get_class<app::VFXSpawnerState__Class>(type_info, "UnityEngine.Experimental.VFX", "VFXSpawnerState");
        }
        inline app::VFXSpawnerState* create() {
            return il2cpp::create_object<app::VFXSpawnerState>(get_class());
        }
    } // namespace VFXSpawnerState
} // namespace app::classes::types
