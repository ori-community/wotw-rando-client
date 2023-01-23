#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PendulumExample__Class.h>
#include <Modloader/app/structs/PendulumExample.h>

namespace app::classes::types {
    namespace PendulumExample {
        namespace {
            inline app::PendulumExample__Class* type_info_ref = nullptr;
        }
        inline app::PendulumExample__Class** type_info = &type_info_ref;
        inline app::PendulumExample__Class* get_class() {
            return il2cpp::get_class<app::PendulumExample__Class>(type_info, "RootMotion.Demos", "PendulumExample");
        }
        inline app::PendulumExample* create() {
            return il2cpp::create_object<app::PendulumExample>(get_class());
        }
    } // namespace PendulumExample
} // namespace app::classes::types
