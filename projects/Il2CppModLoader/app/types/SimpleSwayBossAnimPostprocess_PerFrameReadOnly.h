#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayBossAnimPostprocess_PerFrameReadOnly {
        namespace {
            app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly__Class* type_info_ref = nullptr;
        }
        app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly__Class** type_info = &type_info_ref;
        inline app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly__Class>(type_info, "Moon", "SimpleSwayBossAnimPostprocess", "PerFrameReadOnly");
        }
        inline app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly* create() {
            return il2cpp::create_object<app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly>(get_class());
        }
        inline app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly__Boxed* box(app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly value) {
            return il2cpp::box_value<app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayBossAnimPostprocess_PerFrameReadOnly
} // namespace app::classes::types
