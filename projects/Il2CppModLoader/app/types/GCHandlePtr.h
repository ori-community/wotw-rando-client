#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GCHandlePtr {
        namespace {
            app::GCHandlePtr__Class* type_info_ref = nullptr;
        }
        app::GCHandlePtr__Class** type_info = &type_info_ref;
        inline app::GCHandlePtr__Class* get_class() {
            return il2cpp::get_class<app::GCHandlePtr__Class>(type_info, "System.Runtime.InteropServices", "GCHandle*");
        }
        inline app::GCHandlePtr* create() {
            return il2cpp::create_object<app::GCHandlePtr>(get_class());
        }
    } // namespace GCHandlePtr
} // namespace app::classes::types
