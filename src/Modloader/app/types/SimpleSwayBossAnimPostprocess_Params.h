#pragma once
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params__Boxed.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayBossAnimPostprocess_Params {
        inline app::SimpleSwayBossAnimPostprocess_Params__Class** type_info() {
            static app::SimpleSwayBossAnimPostprocess_Params__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleSwayBossAnimPostprocess_Params__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleSwayBossAnimPostprocess_Params__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayBossAnimPostprocess_Params__Class>(type_info(), "Moon", "SimpleSwayBossAnimPostprocess", "Params");
        }
        inline app::SimpleSwayBossAnimPostprocess_Params* create() {
            return il2cpp::create_object<app::SimpleSwayBossAnimPostprocess_Params>(get_class());
        }
        inline app::SimpleSwayBossAnimPostprocess_Params__Boxed* box(app::SimpleSwayBossAnimPostprocess_Params value) {
            return il2cpp::box_value<app::SimpleSwayBossAnimPostprocess_Params__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayBossAnimPostprocess_Params
} // namespace app::classes::types
