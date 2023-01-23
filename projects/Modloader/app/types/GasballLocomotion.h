#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GasballLocomotion__Class.h>
#include <Modloader/app/structs/GasballLocomotion.h>

namespace app::classes::types {
    namespace GasballLocomotion {
        namespace {
            inline app::GasballLocomotion__Class* type_info_ref = nullptr;
        }
        inline app::GasballLocomotion__Class** type_info = &type_info_ref;
        inline app::GasballLocomotion__Class* get_class() {
            return il2cpp::get_class<app::GasballLocomotion__Class>(type_info, "Moon", "GasballLocomotion");
        }
        inline app::GasballLocomotion* create() {
            return il2cpp::create_object<app::GasballLocomotion>(get_class());
        }
    } // namespace GasballLocomotion
} // namespace app::classes::types
