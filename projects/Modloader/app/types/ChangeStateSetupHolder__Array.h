#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChangeStateSetupHolder__Array__Class.h>
#include <Modloader/app/structs/ChangeStateSetupHolder__Array.h>

namespace app::classes::types {
    namespace ChangeStateSetupHolder__Array {
        namespace {
            inline app::ChangeStateSetupHolder__Array__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateSetupHolder__Array__Class** type_info = &type_info_ref;
        inline app::ChangeStateSetupHolder__Array__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateSetupHolder__Array__Class>(type_info, "Moon.Setups", "ChangeStateSetupHolder[]");
        }
        inline app::ChangeStateSetupHolder__Array* create() {
            return il2cpp::create_object<app::ChangeStateSetupHolder__Array>(get_class());
        }
    } // namespace ChangeStateSetupHolder__Array
} // namespace app::classes::types
