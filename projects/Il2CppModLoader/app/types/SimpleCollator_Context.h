#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleCollator_Context {
        namespace {
            inline app::SimpleCollator_Context__Class* type_info_ref = nullptr;
        }
        inline app::SimpleCollator_Context__Class** type_info = &type_info_ref;
        inline app::SimpleCollator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleCollator_Context__Class>(type_info, "Mono.Globalization.Unicode", "SimpleCollator", "Context");
        }
        inline app::SimpleCollator_Context* create() {
            return il2cpp::create_object<app::SimpleCollator_Context>(get_class());
        }
        inline app::SimpleCollator_Context__Boxed* box(app::SimpleCollator_Context value) {
            return il2cpp::box_value<app::SimpleCollator_Context__Boxed>(get_class(), value);
        }
    } // namespace SimpleCollator_Context
} // namespace app::classes::types
