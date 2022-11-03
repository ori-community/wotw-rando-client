#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DoorLogic {
        namespace {
            inline app::DoorLogic__Class* type_info_ref = nullptr;
        }
        inline app::DoorLogic__Class** type_info = &type_info_ref;
        inline app::DoorLogic__Class* get_class() {
            return il2cpp::get_class<app::DoorLogic__Class>(type_info, "", "DoorLogic");
        }
        inline app::DoorLogic* create() {
            return il2cpp::create_object<app::DoorLogic>(get_class());
        }
    } // namespace DoorLogic
} // namespace app::classes::types
