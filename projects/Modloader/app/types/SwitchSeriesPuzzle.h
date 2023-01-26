#pragma once
#include <Modloader/app/structs/SwitchSeriesPuzzle.h>
#include <Modloader/app/structs/SwitchSeriesPuzzle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchSeriesPuzzle {
        inline app::SwitchSeriesPuzzle__Class** type_info() {
            static app::SwitchSeriesPuzzle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchSeriesPuzzle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchSeriesPuzzle__Class* get_class() {
            return il2cpp::get_class<app::SwitchSeriesPuzzle__Class>(type_info(), "", "SwitchSeriesPuzzle");
        }
        inline app::SwitchSeriesPuzzle* create() {
            return il2cpp::create_object<app::SwitchSeriesPuzzle>(get_class());
        }
    } // namespace SwitchSeriesPuzzle
} // namespace app::classes::types
