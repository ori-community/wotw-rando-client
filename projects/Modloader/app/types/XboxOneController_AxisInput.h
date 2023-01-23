#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxOneController_AxisInput__Class.h>
#include <Modloader/app/structs/XboxOneController_AxisInput.h>

namespace app::classes::types {
    namespace XboxOneController_AxisInput {
        inline app::XboxOneController_AxisInput__Class** type_info = (app::XboxOneController_AxisInput__Class**)(modloader::win::memory::resolve_rva(0x0471B7C8));
        inline app::XboxOneController_AxisInput__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneController_AxisInput__Class>(type_info, "", "XboxOneController", "AxisInput");
        }
        inline app::XboxOneController_AxisInput* create() {
            return il2cpp::create_object<app::XboxOneController_AxisInput>(get_class());
        }
    } // namespace XboxOneController_AxisInput
} // namespace app::classes::types
