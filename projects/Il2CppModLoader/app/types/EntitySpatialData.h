#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntitySpatialData {
        inline app::EntitySpatialData__Class** type_info = (app::EntitySpatialData__Class**)(modloader::win::memory::resolve_rva(0x04740588));
        inline app::EntitySpatialData__Class* get_class() {
            return il2cpp::get_class<app::EntitySpatialData__Class>(type_info, "Moon", "EntitySpatialData");
        }
        inline app::EntitySpatialData* create() {
            return il2cpp::create_object<app::EntitySpatialData>(get_class());
        }
    } // namespace EntitySpatialData
} // namespace app::classes::types
