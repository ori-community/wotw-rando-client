#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlueFlameVineDoorController__Class.h>
#include <Modloader/app/structs/BlueFlameVineDoorController.h>

namespace app::classes::types {
    namespace BlueFlameVineDoorController {
        namespace {
            inline app::BlueFlameVineDoorController__Class* type_info_ref = nullptr;
        }
        inline app::BlueFlameVineDoorController__Class** type_info = &type_info_ref;
        inline app::BlueFlameVineDoorController__Class* get_class() {
            return il2cpp::get_class<app::BlueFlameVineDoorController__Class>(type_info, "Moon", "BlueFlameVineDoorController");
        }
        inline app::BlueFlameVineDoorController* create() {
            return il2cpp::create_object<app::BlueFlameVineDoorController>(get_class());
        }
    } // namespace BlueFlameVineDoorController
} // namespace app::classes::types
