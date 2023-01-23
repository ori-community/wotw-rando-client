#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Terrain_1__Array__Class.h>
#include <Modloader/app/structs/Terrain_1__Array.h>

namespace app::classes::types {
    namespace Terrain_1__Array {
        namespace {
            inline app::Terrain_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::Terrain_1__Array__Class** type_info = &type_info_ref;
        inline app::Terrain_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Terrain_1__Array__Class>(type_info, "UnityEngine", "Terrain[]");
        }
        inline app::Terrain_1__Array* create() {
            return il2cpp::create_object<app::Terrain_1__Array>(get_class());
        }
    } // namespace Terrain_1__Array
} // namespace app::classes::types
