#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TerrainOffset__Class.h>
#include <Modloader/app/structs/TerrainOffset.h>

namespace app::classes::types {
    namespace TerrainOffset {
        namespace {
            inline app::TerrainOffset__Class* type_info_ref = nullptr;
        }
        inline app::TerrainOffset__Class** type_info = &type_info_ref;
        inline app::TerrainOffset__Class* get_class() {
            return il2cpp::get_class<app::TerrainOffset__Class>(type_info, "RootMotion.Demos", "TerrainOffset");
        }
        inline app::TerrainOffset* create() {
            return il2cpp::create_object<app::TerrainOffset>(get_class());
        }
    } // namespace TerrainOffset
} // namespace app::classes::types
