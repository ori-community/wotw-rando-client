#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt32Ptr {
        namespace {
            app::UInt32Ptr__Class* type_info_ref = nullptr;
        }
        app::UInt32Ptr__Class** type_info = &type_info_ref;
        inline app::UInt32Ptr__Class* get_class() {
            return il2cpp::get_class<app::UInt32Ptr__Class>(type_info, "System", "UInt32*");
        }
        inline app::UInt32Ptr* create() {
            return il2cpp::create_object<app::UInt32Ptr>(get_class());
        }
    } // namespace UInt32Ptr
} // namespace app::classes::types
