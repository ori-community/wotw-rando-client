#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DoorSetupData__Array__Class.h>
#include <Modloader/app/structs/DoorSetupData__Array.h>

namespace app::classes::types {
    namespace DoorSetupData__Array {
        namespace {
            inline app::DoorSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::DoorSetupData__Array__Class** type_info = &type_info_ref;
        inline app::DoorSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::DoorSetupData__Array__Class>(type_info, "", "DoorSetupData[]");
        }
        inline app::DoorSetupData__Array* create() {
            return il2cpp::create_object<app::DoorSetupData__Array>(get_class());
        }
    } // namespace DoorSetupData__Array
} // namespace app::classes::types
