#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RestartOneLifeMode {
        namespace {
            inline app::RestartOneLifeMode__Class* type_info_ref = nullptr;
        }
        inline app::RestartOneLifeMode__Class** type_info = &type_info_ref;
        inline app::RestartOneLifeMode__Class* get_class() {
            return il2cpp::get_class<app::RestartOneLifeMode__Class>(type_info, "", "RestartOneLifeMode");
        }
        inline app::RestartOneLifeMode* create() {
            return il2cpp::create_object<app::RestartOneLifeMode>(get_class());
        }
    } // namespace RestartOneLifeMode
} // namespace app::classes::types
