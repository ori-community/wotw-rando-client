#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterSerpentPlaceholder {
        namespace {
            app::WaterSerpentPlaceholder__Class* type_info_ref = nullptr;
        }
        app::WaterSerpentPlaceholder__Class** type_info = &type_info_ref;
        inline app::WaterSerpentPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::WaterSerpentPlaceholder__Class>(type_info, "", "WaterSerpentPlaceholder");
        }
        inline app::WaterSerpentPlaceholder* create() {
            return il2cpp::create_object<app::WaterSerpentPlaceholder>(get_class());
        }
    } // namespace WaterSerpentPlaceholder
} // namespace app::classes::types
