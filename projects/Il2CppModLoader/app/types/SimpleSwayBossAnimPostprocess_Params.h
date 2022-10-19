#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleSwayBossAnimPostprocess_Params {
        namespace {
            inline app::SimpleSwayBossAnimPostprocess_Params__Class* type_info_ref = nullptr;
        }
        inline app::SimpleSwayBossAnimPostprocess_Params__Class** type_info = &type_info_ref;
        inline app::SimpleSwayBossAnimPostprocess_Params__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayBossAnimPostprocess_Params__Class>(type_info, "Moon", "SimpleSwayBossAnimPostprocess", "Params");
        }
        inline app::SimpleSwayBossAnimPostprocess_Params* create() {
            return il2cpp::create_object<app::SimpleSwayBossAnimPostprocess_Params>(get_class());
        }
        inline app::SimpleSwayBossAnimPostprocess_Params__Boxed* box(app::SimpleSwayBossAnimPostprocess_Params value) {
            return il2cpp::box_value<app::SimpleSwayBossAnimPostprocess_Params__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayBossAnimPostprocess_Params
} // namespace app::classes::types
