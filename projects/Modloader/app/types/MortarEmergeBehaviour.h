#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MortarEmergeBehaviour__Class.h>
#include <Modloader/app/structs/MortarEmergeBehaviour.h>

namespace app::classes::types {
    namespace MortarEmergeBehaviour {
        namespace {
            inline app::MortarEmergeBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MortarEmergeBehaviour__Class** type_info = &type_info_ref;
        inline app::MortarEmergeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarEmergeBehaviour__Class>(type_info, "", "MortarEmergeBehaviour");
        }
        inline app::MortarEmergeBehaviour* create() {
            return il2cpp::create_object<app::MortarEmergeBehaviour>(get_class());
        }
    } // namespace MortarEmergeBehaviour
} // namespace app::classes::types
