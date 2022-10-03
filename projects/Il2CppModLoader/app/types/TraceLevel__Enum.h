#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TraceLevel__Enum {
        namespace {
            app::TraceLevel__Enum__Class* type_info_ref = nullptr;
        }
        app::TraceLevel__Enum__Class** type_info = &type_info_ref;
        inline app::TraceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::TraceLevel__Enum__Class>(type_info, "System.Diagnostics", "TraceLevel");
        }
        inline app::TraceLevel__Enum* create() {
            return il2cpp::create_object<app::TraceLevel__Enum>(get_class());
        }
    } // namespace TraceLevel__Enum
} // namespace app::classes::types
