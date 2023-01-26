#pragma once
#include <Modloader/app/structs/ControlSchemeGridController_c.h>
#include <Modloader/app/structs/ControlSchemeGridController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlSchemeGridController_c {
        inline app::ControlSchemeGridController_c__Class** type_info() {
            static app::ControlSchemeGridController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControlSchemeGridController_c__Class**)(modloader::win::memory::resolve_rva(0x04722628));
            }
            return cache;
        }
        inline app::ControlSchemeGridController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlSchemeGridController_c__Class>(type_info(), "", "ControlSchemeGridController", "<>c");
        }
        inline app::ControlSchemeGridController_c* create() {
            return il2cpp::create_object<app::ControlSchemeGridController_c>(get_class());
        }
    } // namespace ControlSchemeGridController_c
} // namespace app::classes::types
