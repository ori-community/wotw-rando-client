#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Input_InputButtonProcessor__Array {
        inline app::Input_InputButtonProcessor__Array__Class** type_info = (app::Input_InputButtonProcessor__Array__Class**)(modloader::win::memory::resolve_rva(0x04747A58));
        inline app::Input_InputButtonProcessor__Array__Class* get_class() {
            return il2cpp::get_class<app::Input_InputButtonProcessor__Array__Class>(type_info, "Core", "Input+InputButtonProcessor[]");
        }
        inline app::Input_InputButtonProcessor__Array* create() {
            return il2cpp::create_object<app::Input_InputButtonProcessor__Array>(get_class());
        }
    } // namespace Input_InputButtonProcessor__Array
} // namespace app::classes::types
