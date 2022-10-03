#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrashContext_Data {
        namespace {
            app::CrashContext_Data__Class* type_info_ref = nullptr;
        }
        app::CrashContext_Data__Class** type_info = &type_info_ref;
        inline app::CrashContext_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_Data__Class>(type_info, "Moon", "CrashContext", "Data");
        }
        inline app::CrashContext_Data* create() {
            return il2cpp::create_object<app::CrashContext_Data>(get_class());
        }
        inline app::CrashContext_Data__Boxed* box(app::CrashContext_Data value) {
            return il2cpp::box_value<app::CrashContext_Data__Boxed>(get_class(), value);
        }
    } // namespace CrashContext_Data
} // namespace app::classes::types
