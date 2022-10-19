#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwingSoundController {
        namespace {
            inline app::SwingSoundController__Class* type_info_ref = nullptr;
        }
        inline app::SwingSoundController__Class** type_info = &type_info_ref;
        inline app::SwingSoundController__Class* get_class() {
            return il2cpp::get_class<app::SwingSoundController__Class>(type_info, "", "SwingSoundController");
        }
        inline app::SwingSoundController* create() {
            return il2cpp::create_object<app::SwingSoundController>(get_class());
        }
    } // namespace SwingSoundController
} // namespace app::classes::types
