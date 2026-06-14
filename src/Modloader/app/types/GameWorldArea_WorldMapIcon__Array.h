#pragma once
#include <Modloader/app/structs/GameWorldArea_WorldMapIcon__Array.h>
#include <Modloader/app/structs/GameWorldArea_WorldMapIcon__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameWorldArea_WorldMapIcon__Array {
        inline app::GameWorldArea_WorldMapIcon__Array__Class** type_info() {
            static app::GameWorldArea_WorldMapIcon__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameWorldArea_WorldMapIcon__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameWorldArea_WorldMapIcon__Array__Class* get_class() {
            return il2cpp::get_class<app::GameWorldArea_WorldMapIcon__Array__Class>(type_info(), "", "GameWorldArea+WorldMapIcon[]");
        }
        inline app::GameWorldArea_WorldMapIcon__Array* create() {
            return il2cpp::create_object<app::GameWorldArea_WorldMapIcon__Array>(get_class());
        }
    } // namespace GameWorldArea_WorldMapIcon__Array
} // namespace app::classes::types
