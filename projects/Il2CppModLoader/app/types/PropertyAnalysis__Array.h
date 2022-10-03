#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyAnalysis__Array {
        namespace {
            app::PropertyAnalysis__Array__Class* type_info_ref = nullptr;
        }
        app::PropertyAnalysis__Array__Class** type_info = &type_info_ref;
        inline app::PropertyAnalysis__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyAnalysis__Array__Class>(type_info, "System.Diagnostics.Tracing", "PropertyAnalysis[]");
        }
        inline app::PropertyAnalysis__Array* create() {
            return il2cpp::create_object<app::PropertyAnalysis__Array>(get_class());
        }
    } // namespace PropertyAnalysis__Array
} // namespace app::classes::types
