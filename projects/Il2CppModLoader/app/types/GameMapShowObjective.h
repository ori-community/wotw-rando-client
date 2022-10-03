#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameMapShowObjective {
        namespace {
            app::GameMapShowObjective__Class* type_info_ref = nullptr;
        }
        app::GameMapShowObjective__Class** type_info = &type_info_ref;
        inline app::GameMapShowObjective__Class* get_class() {
            return il2cpp::get_class<app::GameMapShowObjective__Class>(type_info, "", "GameMapShowObjective");
        }
        inline app::GameMapShowObjective* create() {
            return il2cpp::create_object<app::GameMapShowObjective>(get_class());
        }
    } // namespace GameMapShowObjective
} // namespace app::classes::types
