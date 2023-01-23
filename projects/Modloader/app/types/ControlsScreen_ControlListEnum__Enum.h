#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ControlsScreen_ControlListEnum__Enum__Class.h>
#include <Modloader/app/structs/ControlsScreen_ControlListEnum__Enum.h>

namespace app::classes::types {
    namespace ControlsScreen_ControlListEnum__Enum {
        inline app::ControlsScreen_ControlListEnum__Enum__Class** type_info = (app::ControlsScreen_ControlListEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x04777EB0));
        inline app::ControlsScreen_ControlListEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlsScreen_ControlListEnum__Enum__Class>(type_info, "", "ControlsScreen", "ControlListEnum");
        }
        inline app::ControlsScreen_ControlListEnum__Enum* create() {
            return il2cpp::create_object<app::ControlsScreen_ControlListEnum__Enum>(get_class());
        }
    } // namespace ControlsScreen_ControlListEnum__Enum
} // namespace app::classes::types
