#pragma once
#include <Modloader/app/structs/SimpleSwayAnimPostprocess__Array.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess__Array {
        inline app::SimpleSwayAnimPostprocess__Array__Class** type_info() {
            static app::SimpleSwayAnimPostprocess__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleSwayAnimPostprocess__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleSwayAnimPostprocess__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleSwayAnimPostprocess__Array__Class>(type_info(), "Moon", "SimpleSwayAnimPostprocess[]");
        }
        inline app::SimpleSwayAnimPostprocess__Array* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess__Array>(get_class());
        }
    } // namespace SimpleSwayAnimPostprocess__Array
} // namespace app::classes::types
