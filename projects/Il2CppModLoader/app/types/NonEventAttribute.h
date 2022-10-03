#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NonEventAttribute {
        namespace {
            app::NonEventAttribute__Class* type_info_ref = nullptr;
        }
        app::NonEventAttribute__Class** type_info = &type_info_ref;
        inline app::NonEventAttribute__Class* get_class() {
            return il2cpp::get_class<app::NonEventAttribute__Class>(type_info, "System.Diagnostics.Tracing", "NonEventAttribute");
        }
        inline app::NonEventAttribute* create() {
            return il2cpp::create_object<app::NonEventAttribute>(get_class());
        }
    } // namespace NonEventAttribute
} // namespace app::classes::types
