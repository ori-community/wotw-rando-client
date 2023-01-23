#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SimpleLocomotion__Class.h>
#include <Modloader/app/structs/SimpleLocomotion.h>

namespace app::classes::types {
    namespace SimpleLocomotion {
        namespace {
            inline app::SimpleLocomotion__Class* type_info_ref = nullptr;
        }
        inline app::SimpleLocomotion__Class** type_info = &type_info_ref;
        inline app::SimpleLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SimpleLocomotion__Class>(type_info, "RootMotion.Demos", "SimpleLocomotion");
        }
        inline app::SimpleLocomotion* create() {
            return il2cpp::create_object<app::SimpleLocomotion>(get_class());
        }
    } // namespace SimpleLocomotion
} // namespace app::classes::types
