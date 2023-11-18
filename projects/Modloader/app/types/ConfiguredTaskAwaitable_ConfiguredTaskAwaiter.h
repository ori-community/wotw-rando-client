#pragma once
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfiguredTaskAwaitable_ConfiguredTaskAwaiter {
        inline app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class** type_info() {
            static app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class* get_class() {
            return il2cpp::get_nested_class<app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Class>(type_info(), "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable", "ConfiguredTaskAwaiter");
        }
        inline app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter* create() {
            return il2cpp::create_object<app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter>(get_class());
        }
        inline app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed* box(app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter value) {
            return il2cpp::box_value<app::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__Boxed>(get_class(), value);
        }
    } // namespace ConfiguredTaskAwaitable_ConfiguredTaskAwaiter
} // namespace app::classes::types
