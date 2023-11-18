#pragma once
#include <Modloader/app/structs/ControllerSchemeOptions.h>
#include <Modloader/app/structs/ControllerSchemeOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerSchemeOptions {
        inline app::ControllerSchemeOptions__Class** type_info() {
            static app::ControllerSchemeOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControllerSchemeOptions__Class**)(modloader::win::memory::resolve_rva(0x0475E750));
            }
            return cache;
        }
        inline app::ControllerSchemeOptions__Class* get_class() {
            return il2cpp::get_class<app::ControllerSchemeOptions__Class>(type_info(), "", "ControllerSchemeOptions");
        }
        inline app::ControllerSchemeOptions* create() {
            return il2cpp::create_object<app::ControllerSchemeOptions>(get_class());
        }
    } // namespace ControllerSchemeOptions
} // namespace app::classes::types
