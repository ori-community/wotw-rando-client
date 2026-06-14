#pragma once
#include <Modloader/app/structs/XboxControllerInput.h>
#include <Modloader/app/structs/XboxControllerInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxControllerInput {
        inline app::XboxControllerInput__Class** type_info() {
            static app::XboxControllerInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxControllerInput__Class**)(modloader::win::memory::resolve_rva(0x04740E38));
            }
            return cache;
        }
        inline app::XboxControllerInput__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerInput__Class>(type_info(), "SmartInput", "XboxControllerInput");
        }
        inline app::XboxControllerInput* create() {
            return il2cpp::create_object<app::XboxControllerInput>(get_class());
        }
    } // namespace XboxControllerInput
} // namespace app::classes::types
