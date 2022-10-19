#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandstormController {
        namespace {
            inline app::SandstormController__Class* type_info_ref = nullptr;
        }
        inline app::SandstormController__Class** type_info = &type_info_ref;
        inline app::SandstormController__Class* get_class() {
            return il2cpp::get_class<app::SandstormController__Class>(type_info, "", "SandstormController");
        }
        inline app::SandstormController* create() {
            return il2cpp::create_object<app::SandstormController>(get_class());
        }
    } // namespace SandstormController
} // namespace app::classes::types
