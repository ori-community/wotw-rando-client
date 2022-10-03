#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GCHandleType__Enum {
        namespace {
            app::GCHandleType__Enum__Class* type_info_ref = nullptr;
        }
        app::GCHandleType__Enum__Class** type_info = &type_info_ref;
        inline app::GCHandleType__Enum__Class* get_class() {
            return il2cpp::get_class<app::GCHandleType__Enum__Class>(type_info, "System.Runtime.InteropServices", "GCHandleType");
        }
        inline app::GCHandleType__Enum* create() {
            return il2cpp::create_object<app::GCHandleType__Enum>(get_class());
        }
    } // namespace GCHandleType__Enum
} // namespace app::classes::types
