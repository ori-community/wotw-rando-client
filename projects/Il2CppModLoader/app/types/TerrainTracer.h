#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TerrainTracer {
        namespace {
            app::TerrainTracer__Class* type_info_ref = nullptr;
        }
        app::TerrainTracer__Class** type_info = &type_info_ref;
        inline app::TerrainTracer__Class* get_class() {
            return il2cpp::get_class<app::TerrainTracer__Class>(type_info, "", "TerrainTracer");
        }
        inline app::TerrainTracer* create() {
            return il2cpp::create_object<app::TerrainTracer>(get_class());
        }
    } // namespace TerrainTracer
} // namespace app::classes::types
