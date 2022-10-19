#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess_PerFrameReadOnly {
        namespace {
            inline app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Class* type_info_ref = nullptr;
        }
        inline app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Class** type_info = &type_info_ref;
        inline app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Class>(type_info, "Moon", "SimpleSwayAnimPostprocess", "PerFrameReadOnly");
        }
        inline app::SimpleSwayAnimPostprocess_PerFrameReadOnly* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess_PerFrameReadOnly>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Boxed* box(app::SimpleSwayAnimPostprocess_PerFrameReadOnly value) {
            return il2cpp::box_value<app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayAnimPostprocess_PerFrameReadOnly
} // namespace app::classes::types
