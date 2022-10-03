#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchSeriesPuzzle {
        namespace {
            app::SwitchSeriesPuzzle__Class* type_info_ref = nullptr;
        }
        app::SwitchSeriesPuzzle__Class** type_info = &type_info_ref;
        inline app::SwitchSeriesPuzzle__Class* get_class() {
            return il2cpp::get_class<app::SwitchSeriesPuzzle__Class>(type_info, "", "SwitchSeriesPuzzle");
        }
        inline app::SwitchSeriesPuzzle* create() {
            return il2cpp::create_object<app::SwitchSeriesPuzzle>(get_class());
        }
    } // namespace SwitchSeriesPuzzle
} // namespace app::classes::types
