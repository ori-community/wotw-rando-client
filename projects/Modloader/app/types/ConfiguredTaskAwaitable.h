#pragma once
#include <Modloader/app/structs/ConfiguredTaskAwaitable.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable__Boxed.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfiguredTaskAwaitable {
        inline app::ConfiguredTaskAwaitable__Class** type_info() {
            static app::ConfiguredTaskAwaitable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConfiguredTaskAwaitable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConfiguredTaskAwaitable__Class* get_class() {
            return il2cpp::get_class<app::ConfiguredTaskAwaitable__Class>(type_info(), "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
        }
        inline app::ConfiguredTaskAwaitable* create() {
            return il2cpp::create_object<app::ConfiguredTaskAwaitable>(get_class());
        }
        inline app::ConfiguredTaskAwaitable__Boxed* box(app::ConfiguredTaskAwaitable value) {
            return il2cpp::box_value<app::ConfiguredTaskAwaitable__Boxed>(get_class(), value);
        }
    } // namespace ConfiguredTaskAwaitable
} // namespace app::classes::types
