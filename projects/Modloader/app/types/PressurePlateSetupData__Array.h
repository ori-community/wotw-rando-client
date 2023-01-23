#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PressurePlateSetupData__Array__Class.h>
#include <Modloader/app/structs/PressurePlateSetupData__Array.h>

namespace app::classes::types {
    namespace PressurePlateSetupData__Array {
        namespace {
            inline app::PressurePlateSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::PressurePlateSetupData__Array__Class** type_info = &type_info_ref;
        inline app::PressurePlateSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::PressurePlateSetupData__Array__Class>(type_info, "", "PressurePlateSetupData[]");
        }
        inline app::PressurePlateSetupData__Array* create() {
            return il2cpp::create_object<app::PressurePlateSetupData__Array>(get_class());
        }
    } // namespace PressurePlateSetupData__Array
} // namespace app::classes::types
