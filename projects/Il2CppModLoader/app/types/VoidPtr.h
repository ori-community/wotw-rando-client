#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VoidPtr {
        namespace {
            app::VoidPtr__Class* type_info_ref = nullptr;
        }
        app::VoidPtr__Class** type_info = &type_info_ref;
        inline app::VoidPtr__Class* get_class() {
            return il2cpp::get_class<app::VoidPtr__Class>(type_info, "System", "Void*");
        }
        inline app::VoidPtr* create() {
            return il2cpp::create_object<app::VoidPtr>(get_class());
        }
    } // namespace VoidPtr
} // namespace app::classes::types
