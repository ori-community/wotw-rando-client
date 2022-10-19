#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateConditionDrawerAttribute {
        namespace {
            inline app::UberStateConditionDrawerAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UberStateConditionDrawerAttribute__Class** type_info = &type_info_ref;
        inline app::UberStateConditionDrawerAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionDrawerAttribute__Class>(type_info, "", "UberStateConditionDrawerAttribute");
        }
        inline app::UberStateConditionDrawerAttribute* create() {
            return il2cpp::create_object<app::UberStateConditionDrawerAttribute>(get_class());
        }
    } // namespace UberStateConditionDrawerAttribute
} // namespace app::classes::types
