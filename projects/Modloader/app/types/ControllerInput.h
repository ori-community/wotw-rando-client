#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ControllerInput__Class.h>
#include <Modloader/app/structs/ControllerInput.h>

namespace app::classes::types {
    namespace ControllerInput {
        inline app::ControllerInput__Class** type_info = (app::ControllerInput__Class**)(modloader::win::memory::resolve_rva(0x0470FA58));
        inline app::ControllerInput__Class* get_class() {
            return il2cpp::get_class<app::ControllerInput__Class>(type_info, "Moon.UberStateVisualization", "ControllerInput");
        }
        inline app::ControllerInput* create() {
            return il2cpp::create_object<app::ControllerInput>(get_class());
        }
    } // namespace ControllerInput
} // namespace app::classes::types
