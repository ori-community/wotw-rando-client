#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxControllerInput {
        inline app::XboxControllerInput__Class** type_info = (app::XboxControllerInput__Class**)(modloader::win::memory::resolve_rva(0x04740E38));
        inline app::XboxControllerInput__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerInput__Class>(type_info, "SmartInput", "XboxControllerInput");
        }
        inline app::XboxControllerInput* create() {
            return il2cpp::create_object<app::XboxControllerInput>(get_class());
        }
    } // namespace XboxControllerInput
} // namespace app::classes::types
