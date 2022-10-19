#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeverSetupData__Array {
        namespace {
            inline app::LeverSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::LeverSetupData__Array__Class** type_info = &type_info_ref;
        inline app::LeverSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::LeverSetupData__Array__Class>(type_info, "", "LeverSetupData[]");
        }
        inline app::LeverSetupData__Array* create() {
            return il2cpp::create_object<app::LeverSetupData__Array>(get_class());
        }
    } // namespace LeverSetupData__Array
} // namespace app::classes::types
