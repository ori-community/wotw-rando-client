#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwitchSeriesPuzzle {
        namespace {
            inline app::SwitchSeriesPuzzle__Class* type_info_ref = nullptr;
        }
        inline app::SwitchSeriesPuzzle__Class** type_info = &type_info_ref;
        inline app::SwitchSeriesPuzzle__Class* get_class() {
            return il2cpp::get_class<app::SwitchSeriesPuzzle__Class>(type_info, "", "SwitchSeriesPuzzle");
        }
        inline app::SwitchSeriesPuzzle* create() {
            return il2cpp::create_object<app::SwitchSeriesPuzzle>(get_class());
        }
    } // namespace SwitchSeriesPuzzle
} // namespace app::classes::types
