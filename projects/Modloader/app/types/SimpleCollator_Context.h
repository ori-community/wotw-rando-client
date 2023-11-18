#pragma once
#include <Modloader/app/structs/SimpleCollator_Context.h>
#include <Modloader/app/structs/SimpleCollator_Context__Boxed.h>
#include <Modloader/app/structs/SimpleCollator_Context__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleCollator_Context {
        inline app::SimpleCollator_Context__Class** type_info() {
            static app::SimpleCollator_Context__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleCollator_Context__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleCollator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleCollator_Context__Class>(type_info(), "Mono.Globalization.Unicode", "SimpleCollator", "Context");
        }
        inline app::SimpleCollator_Context* create() {
            return il2cpp::create_object<app::SimpleCollator_Context>(get_class());
        }
        inline app::SimpleCollator_Context__Boxed* box(app::SimpleCollator_Context value) {
            return il2cpp::box_value<app::SimpleCollator_Context__Boxed>(get_class(), value);
        }
    } // namespace SimpleCollator_Context
} // namespace app::classes::types
