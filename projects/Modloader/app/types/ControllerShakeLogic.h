#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ControllerShakeLogic__Class.h>
#include <Modloader/app/structs/ControllerShakeLogic.h>

namespace app::classes::types {
    namespace ControllerShakeLogic {
        inline app::ControllerShakeLogic__Class** type_info = (app::ControllerShakeLogic__Class**)(modloader::win::memory::resolve_rva(0x04778C58));
        inline app::ControllerShakeLogic__Class* get_class() {
            return il2cpp::get_class<app::ControllerShakeLogic__Class>(type_info, "", "ControllerShakeLogic");
        }
        inline app::ControllerShakeLogic* create() {
            return il2cpp::create_object<app::ControllerShakeLogic>(get_class());
        }
    } // namespace ControllerShakeLogic
} // namespace app::classes::types
