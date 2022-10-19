#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PoleSetupData__Array {
        namespace {
            inline app::PoleSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::PoleSetupData__Array__Class** type_info = &type_info_ref;
        inline app::PoleSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::PoleSetupData__Array__Class>(type_info, "Game", "PoleSetupData[]");
        }
        inline app::PoleSetupData__Array* create() {
            return il2cpp::create_object<app::PoleSetupData__Array>(get_class());
        }
    } // namespace PoleSetupData__Array
} // namespace app::classes::types
