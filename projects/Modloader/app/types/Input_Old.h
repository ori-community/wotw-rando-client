#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Input_Old__Class.h>
#include <Modloader/app/structs/Input_Old.h>

namespace app::classes::types {
    namespace Input_Old {
        inline app::Input_Old__Class** type_info = (app::Input_Old__Class**)(modloader::win::memory::resolve_rva(0x04714C38));
        inline app::Input_Old__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Old__Class>(type_info, "Core", "Input", "Old");
        }
        inline app::Input_Old* create() {
            return il2cpp::create_object<app::Input_Old>(get_class());
        }
    } // namespace Input_Old
} // namespace app::classes::types
