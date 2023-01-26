#pragma once
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Params.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Params__Boxed.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Params__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess_Params {
        inline app::SimpleSwayAnimPostprocess_Params__Class** type_info() {
            static app::SimpleSwayAnimPostprocess_Params__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleSwayAnimPostprocess_Params__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleSwayAnimPostprocess_Params__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSwayAnimPostprocess_Params__Class>(type_info(), "Moon", "SimpleSwayAnimPostprocess", "Params");
        }
        inline app::SimpleSwayAnimPostprocess_Params* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess_Params>(get_class());
        }
        inline app::SimpleSwayAnimPostprocess_Params__Boxed* box(app::SimpleSwayAnimPostprocess_Params value) {
            return il2cpp::box_value<app::SimpleSwayAnimPostprocess_Params__Boxed>(get_class(), value);
        }
    } // namespace SimpleSwayAnimPostprocess_Params
} // namespace app::classes::types
