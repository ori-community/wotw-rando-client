#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PressurePlate__Class.h>
#include <Modloader/app/structs/PressurePlate.h>

namespace app::classes::types {
    namespace PressurePlate {
        namespace {
            inline app::PressurePlate__Class* type_info_ref = nullptr;
        }
        inline app::PressurePlate__Class** type_info = &type_info_ref;
        inline app::PressurePlate__Class* get_class() {
            return il2cpp::get_class<app::PressurePlate__Class>(type_info, "", "PressurePlate");
        }
        inline app::PressurePlate* create() {
            return il2cpp::create_object<app::PressurePlate>(get_class());
        }
    } // namespace PressurePlate
} // namespace app::classes::types
