#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameWorldArea_WorldMapIcon {
        namespace {
            inline app::GameWorldArea_WorldMapIcon__Class* type_info_ref = nullptr;
        }
        inline app::GameWorldArea_WorldMapIcon__Class** type_info = &type_info_ref;
        inline app::GameWorldArea_WorldMapIcon__Class* get_class() {
            return il2cpp::get_nested_class<app::GameWorldArea_WorldMapIcon__Class>(type_info, "", "GameWorldArea", "WorldMapIcon");
        }
        inline app::GameWorldArea_WorldMapIcon* create() {
            return il2cpp::create_object<app::GameWorldArea_WorldMapIcon>(get_class());
        }
        inline app::GameWorldArea_WorldMapIcon__Array* create_array(int size) {
            return il2cpp::array_new<app::GameWorldArea_WorldMapIcon__Array>(get_class(), size);
        }
        inline app::GameWorldArea_WorldMapIcon__Array* create_array(const std::vector<app::GameWorldArea_WorldMapIcon*>& items) {
            return il2cpp::array_new<app::GameWorldArea_WorldMapIcon__Array>(get_class(), items);
        }
    } // namespace GameWorldArea_WorldMapIcon
} // namespace app::classes::types
