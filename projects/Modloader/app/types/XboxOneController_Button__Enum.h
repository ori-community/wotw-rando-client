#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxOneController_Button__Enum__Class.h>
#include <Modloader/app/structs/XboxOneController_Button__Enum.h>
#include <Modloader/app/structs/XboxOneController_Button__Enum__Array.h>

namespace app::classes::types {
    namespace XboxOneController_Button__Enum {
        inline app::XboxOneController_Button__Enum__Class** type_info = (app::XboxOneController_Button__Enum__Class**)(modloader::win::memory::resolve_rva(0x04717168));
        inline app::XboxOneController_Button__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneController_Button__Enum__Class>(type_info, "", "XboxOneController", "Button");
        }
        inline app::XboxOneController_Button__Enum* create() {
            return il2cpp::create_object<app::XboxOneController_Button__Enum>(get_class());
        }
        inline app::XboxOneController_Button__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxOneController_Button__Enum__Array>(get_class(), size);
        }
        inline app::XboxOneController_Button__Enum__Array* create_array(const std::vector<app::XboxOneController_Button__Enum*>& items) {
            return il2cpp::array_new<app::XboxOneController_Button__Enum__Array>(get_class(), items);
        }
    } // namespace XboxOneController_Button__Enum
} // namespace app::classes::types
