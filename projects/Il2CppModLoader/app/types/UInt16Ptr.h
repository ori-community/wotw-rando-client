#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt16Ptr {
        namespace {
            app::UInt16Ptr__Class* type_info_ref = nullptr;
        }
        app::UInt16Ptr__Class** type_info = &type_info_ref;
        inline app::UInt16Ptr__Class* get_class() {
            return il2cpp::get_class<app::UInt16Ptr__Class>(type_info, "System", "UInt16*");
        }
        inline app::UInt16Ptr* create() {
            return il2cpp::create_object<app::UInt16Ptr>(get_class());
        }
    } // namespace UInt16Ptr
} // namespace app::classes::types
