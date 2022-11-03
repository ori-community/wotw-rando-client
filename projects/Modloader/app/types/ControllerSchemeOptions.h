#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControllerSchemeOptions {
        inline app::ControllerSchemeOptions__Class** type_info = (app::ControllerSchemeOptions__Class**)(modloader::win::memory::resolve_rva(0x0475E750));
        inline app::ControllerSchemeOptions__Class* get_class() {
            return il2cpp::get_class<app::ControllerSchemeOptions__Class>(type_info, "", "ControllerSchemeOptions");
        }
        inline app::ControllerSchemeOptions* create() {
            return il2cpp::create_object<app::ControllerSchemeOptions>(get_class());
        }
    } // namespace ControllerSchemeOptions
} // namespace app::classes::types
