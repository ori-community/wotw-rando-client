#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AllConditions_1 {
        namespace {
            inline app::AllConditions_1__Class* type_info_ref = nullptr;
        }
        inline app::AllConditions_1__Class** type_info = &type_info_ref;
        inline app::AllConditions_1__Class* get_class() {
            return il2cpp::get_class<app::AllConditions_1__Class>(type_info, "fsm", "AllConditions");
        }
        inline app::AllConditions_1* create() {
            return il2cpp::create_object<app::AllConditions_1>(get_class());
        }
    } // namespace AllConditions_1
} // namespace app::classes::types
