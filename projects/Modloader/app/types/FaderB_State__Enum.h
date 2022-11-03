#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FaderB_State__Enum {
        inline app::FaderB_State__Enum__Class** type_info = (app::FaderB_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x04718020));
        inline app::FaderB_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FaderB_State__Enum__Class>(type_info, "", "FaderB", "State");
        }
        inline app::FaderB_State__Enum* create() {
            return il2cpp::create_object<app::FaderB_State__Enum>(get_class());
        }
    } // namespace FaderB_State__Enum
} // namespace app::classes::types
