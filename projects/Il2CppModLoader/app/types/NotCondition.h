#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotCondition {
        namespace {
            inline app::NotCondition__Class* type_info_ref = nullptr;
        }
        inline app::NotCondition__Class** type_info = &type_info_ref;
        inline app::NotCondition__Class* get_class() {
            return il2cpp::get_class<app::NotCondition__Class>(type_info, "", "NotCondition");
        }
        inline app::NotCondition* create() {
            return il2cpp::create_object<app::NotCondition>(get_class());
        }
    } // namespace NotCondition
} // namespace app::classes::types
