#pragma once
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_PerFrameReadOnly.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_PerFrameReadOnly__Boxed.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_PerFrameReadOnly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess_PerFrameReadOnly {
        inline app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Class** type_info() {
            static app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Class>(type_info(), "Moon", "SimpleSwayAnimPostprocess", "PerFrameReadOnly");
        }
        inline app::SimpleSwayAnimPostprocess_PerFrameReadOnly* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess_PerFrameReadOnly>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Boxed* box(app::SimpleSwayAnimPostprocess_PerFrameReadOnly value) {
            return il2cpp::box_value<app::SimpleSwayAnimPostprocess_PerFrameReadOnly__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayAnimPostprocess_PerFrameReadOnly
} // namespace app::classes::types
