#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapObjectiveArrow {
        namespace {
            app::AreaMapObjectiveArrow__Class* type_info_ref = nullptr;
        }
        app::AreaMapObjectiveArrow__Class** type_info = &type_info_ref;
        inline app::AreaMapObjectiveArrow__Class* get_class() {
            return il2cpp::get_class<app::AreaMapObjectiveArrow__Class>(type_info, "", "AreaMapObjectiveArrow");
        }
        inline app::AreaMapObjectiveArrow* create() {
            return il2cpp::create_object<app::AreaMapObjectiveArrow>(get_class());
        }
    } // namespace AreaMapObjectiveArrow
} // namespace app::classes::types
