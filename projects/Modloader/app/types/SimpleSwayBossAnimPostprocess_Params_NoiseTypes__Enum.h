#pragma once
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum {
        inline app::SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__Class** type_info() {
            static app::SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum__Class>(type_info(), "Moon", "SimpleSwayBossAnimPostprocess+Params", "NoiseTypes");
        }
        inline app::SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum* create() {
            return il2cpp::create_object<app::SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum>(get_class());
        }
    } // namespace SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum
} // namespace app::classes::types
