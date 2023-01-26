#pragma once
#include <Modloader/app/structs/GameWorldArea_LupoAreaData.h>
#include <Modloader/app/structs/GameWorldArea_LupoAreaData__Boxed.h>
#include <Modloader/app/structs/GameWorldArea_LupoAreaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameWorldArea_LupoAreaData {
        inline app::GameWorldArea_LupoAreaData__Class** type_info() {
            static app::GameWorldArea_LupoAreaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameWorldArea_LupoAreaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameWorldArea_LupoAreaData__Class* get_class() {
            return il2cpp::get_nested_class<app::GameWorldArea_LupoAreaData__Class>(type_info(), "", "GameWorldArea", "LupoAreaData");
        }
        inline app::GameWorldArea_LupoAreaData* create() {
            return il2cpp::create_object<app::GameWorldArea_LupoAreaData>(get_class());
        }
        inline app::GameWorldArea_LupoAreaData__Boxed* box(app::GameWorldArea_LupoAreaData value) {
            return il2cpp::box_value<app::GameWorldArea_LupoAreaData__Boxed>(get_class(), value);
        }
    } // namespace GameWorldArea_LupoAreaData
} // namespace app::classes::types
