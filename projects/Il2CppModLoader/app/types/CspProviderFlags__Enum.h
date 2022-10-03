#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CspProviderFlags__Enum {
        namespace {
            app::CspProviderFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::CspProviderFlags__Enum__Class** type_info = &type_info_ref;
        inline app::CspProviderFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::CspProviderFlags__Enum__Class>(type_info, "System.Security.Cryptography", "CspProviderFlags");
        }
        inline app::CspProviderFlags__Enum* create() {
            return il2cpp::create_object<app::CspProviderFlags__Enum>(get_class());
        }
    } // namespace CspProviderFlags__Enum
} // namespace app::classes::types
