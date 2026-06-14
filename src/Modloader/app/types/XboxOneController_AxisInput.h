#pragma once
#include <Modloader/app/structs/XboxOneController_AxisInput.h>
#include <Modloader/app/structs/XboxOneController_AxisInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneController_AxisInput {
        inline app::XboxOneController_AxisInput__Class** type_info() {
            static app::XboxOneController_AxisInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneController_AxisInput__Class**)(modloader::win::memory::resolve_rva(0x0471B7C8));
            }
            return cache;
        }
        inline app::XboxOneController_AxisInput__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneController_AxisInput__Class>(type_info(), "", "XboxOneController", "AxisInput");
        }
        inline app::XboxOneController_AxisInput* create() {
            return il2cpp::create_object<app::XboxOneController_AxisInput>(get_class());
        }
    } // namespace XboxOneController_AxisInput
} // namespace app::classes::types
