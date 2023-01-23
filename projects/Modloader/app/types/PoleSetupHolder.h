#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PoleSetupHolder__Class.h>
#include <Modloader/app/structs/PoleSetupHolder.h>

namespace app::classes::types {
    namespace PoleSetupHolder {
        namespace {
            inline app::PoleSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::PoleSetupHolder__Class** type_info = &type_info_ref;
        inline app::PoleSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::PoleSetupHolder__Class>(type_info, "Game", "PoleSetupHolder");
        }
        inline app::PoleSetupHolder* create() {
            return il2cpp::create_object<app::PoleSetupHolder>(get_class());
        }
    } // namespace PoleSetupHolder
} // namespace app::classes::types
