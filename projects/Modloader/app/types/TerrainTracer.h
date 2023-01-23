#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TerrainTracer__Class.h>
#include <Modloader/app/structs/TerrainTracer.h>

namespace app::classes::types {
    namespace TerrainTracer {
        namespace {
            inline app::TerrainTracer__Class* type_info_ref = nullptr;
        }
        inline app::TerrainTracer__Class** type_info = &type_info_ref;
        inline app::TerrainTracer__Class* get_class() {
            return il2cpp::get_class<app::TerrainTracer__Class>(type_info, "", "TerrainTracer");
        }
        inline app::TerrainTracer* create() {
            return il2cpp::create_object<app::TerrainTracer>(get_class());
        }
    } // namespace TerrainTracer
} // namespace app::classes::types
