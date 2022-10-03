#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int64Ptr {
        namespace {
            app::Int64Ptr__Class* type_info_ref = nullptr;
        }
        app::Int64Ptr__Class** type_info = &type_info_ref;
        inline app::Int64Ptr__Class* get_class() {
            return il2cpp::get_class<app::Int64Ptr__Class>(type_info, "System", "Int64*");
        }
        inline app::Int64Ptr* create() {
            return il2cpp::create_object<app::Int64Ptr>(get_class());
        }
    } // namespace Int64Ptr
} // namespace app::classes::types
