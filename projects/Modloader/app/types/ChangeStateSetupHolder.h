#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChangeStateSetupHolder__Class.h>
#include <Modloader/app/structs/ChangeStateSetupHolder.h>
#include <Modloader/app/structs/ChangeStateSetupHolder__Array.h>

namespace app::classes::types {
    namespace ChangeStateSetupHolder {
        namespace {
            inline app::ChangeStateSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateSetupHolder__Class** type_info = &type_info_ref;
        inline app::ChangeStateSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateSetupHolder__Class>(type_info, "Moon.Setups", "ChangeStateSetupHolder");
        }
        inline app::ChangeStateSetupHolder* create() {
            return il2cpp::create_object<app::ChangeStateSetupHolder>(get_class());
        }
        inline app::ChangeStateSetupHolder__Array* create_array(int size) {
            return il2cpp::array_new<app::ChangeStateSetupHolder__Array>(get_class(), size);
        }
        inline app::ChangeStateSetupHolder__Array* create_array(const std::vector<app::ChangeStateSetupHolder*>& items) {
            return il2cpp::array_new<app::ChangeStateSetupHolder__Array>(get_class(), items);
        }
    } // namespace ChangeStateSetupHolder
} // namespace app::classes::types
