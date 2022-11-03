#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlScheme__Enum {
        inline app::ControlScheme__Enum__Class** type_info = (app::ControlScheme__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C348));
        inline app::ControlScheme__Enum__Class* get_class() {
            return il2cpp::get_class<app::ControlScheme__Enum__Class>(type_info, "", "ControlScheme");
        }
        inline app::ControlScheme__Enum* create() {
            return il2cpp::create_object<app::ControlScheme__Enum>(get_class());
        }
    } // namespace ControlScheme__Enum
} // namespace app::classes::types
