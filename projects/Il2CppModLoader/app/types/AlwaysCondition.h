#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AlwaysCondition {
        namespace {
            inline app::AlwaysCondition__Class* type_info_ref = nullptr;
        }
        inline app::AlwaysCondition__Class** type_info = &type_info_ref;
        inline app::AlwaysCondition__Class* get_class() {
            return il2cpp::get_class<app::AlwaysCondition__Class>(type_info, "fsm", "AlwaysCondition");
        }
        inline app::AlwaysCondition* create() {
            return il2cpp::create_object<app::AlwaysCondition>(get_class());
        }
    } // namespace AlwaysCondition
} // namespace app::classes::types
