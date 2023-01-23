#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivateAndHold_State__Enum__Class.h>
#include <Modloader/app/structs/ActivateAndHold_State__Enum.h>

namespace app::classes::types {
    namespace ActivateAndHold_State__Enum {
        inline app::ActivateAndHold_State__Enum__Class** type_info = (app::ActivateAndHold_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x047177D8));
        inline app::ActivateAndHold_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ActivateAndHold_State__Enum__Class>(type_info, "", "ActivateAndHold", "State");
        }
        inline app::ActivateAndHold_State__Enum* create() {
            return il2cpp::create_object<app::ActivateAndHold_State__Enum>(get_class());
        }
    } // namespace ActivateAndHold_State__Enum
} // namespace app::classes::types
