#pragma once
#include <Modloader/app/structs/ControllerButtonInput.h>
#include <Modloader/app/structs/ControllerButtonInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerButtonInput {
        inline app::ControllerButtonInput__Class** type_info() {
            static app::ControllerButtonInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControllerButtonInput__Class**)(modloader::win::memory::resolve_rva(0x04771258));
            }
            return cache;
        }
        inline app::ControllerButtonInput__Class* get_class() {
            return il2cpp::get_class<app::ControllerButtonInput__Class>(type_info(), "SmartInput", "ControllerButtonInput");
        }
        inline app::ControllerButtonInput* create() {
            return il2cpp::create_object<app::ControllerButtonInput>(get_class());
        }
    } // namespace ControllerButtonInput
} // namespace app::classes::types
