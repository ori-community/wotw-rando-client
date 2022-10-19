#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt64Ptr {
        namespace {
            inline app::UInt64Ptr__Class* type_info_ref = nullptr;
        }
        inline app::UInt64Ptr__Class** type_info = &type_info_ref;
        inline app::UInt64Ptr__Class* get_class() {
            return il2cpp::get_class<app::UInt64Ptr__Class>(type_info, "System", "UInt64*");
        }
        inline app::UInt64Ptr* create() {
            return il2cpp::create_object<app::UInt64Ptr>(get_class());
        }
    } // namespace UInt64Ptr
} // namespace app::classes::types
