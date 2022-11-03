#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Input_InputButtonProcessor {
        inline app::Input_InputButtonProcessor__Class** type_info = (app::Input_InputButtonProcessor__Class**)(modloader::win::memory::resolve_rva(0x047792E0));
        inline app::Input_InputButtonProcessor__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_InputButtonProcessor__Class>(type_info, "Core", "Input", "InputButtonProcessor");
        }
        inline app::Input_InputButtonProcessor* create() {
            return il2cpp::create_object<app::Input_InputButtonProcessor>(get_class());
        }
        inline app::Input_InputButtonProcessor__Array* create_array(int size) {
            return il2cpp::array_new<app::Input_InputButtonProcessor__Array>(get_class(), size);
        }
        inline app::Input_InputButtonProcessor__Array* create_array(const std::vector<app::Input_InputButtonProcessor*>& items) {
            return il2cpp::array_new<app::Input_InputButtonProcessor__Array>(get_class(), items);
        }
    } // namespace Input_InputButtonProcessor
} // namespace app::classes::types
