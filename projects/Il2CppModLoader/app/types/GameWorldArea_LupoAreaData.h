#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameWorldArea_LupoAreaData {
        namespace {
            inline app::GameWorldArea_LupoAreaData__Class* type_info_ref = nullptr;
        }
        inline app::GameWorldArea_LupoAreaData__Class** type_info = &type_info_ref;
        inline app::GameWorldArea_LupoAreaData__Class* get_class() {
            return il2cpp::get_nested_class<app::GameWorldArea_LupoAreaData__Class>(type_info, "", "GameWorldArea", "LupoAreaData");
        }
        inline app::GameWorldArea_LupoAreaData* create() {
            return il2cpp::create_object<app::GameWorldArea_LupoAreaData>(get_class());
        }
        inline app::GameWorldArea_LupoAreaData__Boxed* box(app::GameWorldArea_LupoAreaData value) {
            return il2cpp::box_value<app::GameWorldArea_LupoAreaData__Boxed>(get_class(), value);
        }
    } // namespace GameWorldArea_LupoAreaData
} // namespace app::classes::types
