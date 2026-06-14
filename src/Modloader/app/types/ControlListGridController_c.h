#pragma once
#include <Modloader/app/structs/ControlListGridController_c.h>
#include <Modloader/app/structs/ControlListGridController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlListGridController_c {
        inline app::ControlListGridController_c__Class** type_info() {
            static app::ControlListGridController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControlListGridController_c__Class**)(modloader::win::memory::resolve_rva(0x04728CC8));
            }
            return cache;
        }
        inline app::ControlListGridController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlListGridController_c__Class>(type_info(), "", "ControlListGridController", "<>c");
        }
        inline app::ControlListGridController_c* create() {
            return il2cpp::create_object<app::ControlListGridController_c>(get_class());
        }
    } // namespace ControlListGridController_c
} // namespace app::classes::types
