#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenFlags__Enum {
        namespace {
            app::OpenFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::OpenFlags__Enum__Class** type_info = &type_info_ref;
        inline app::OpenFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::OpenFlags__Enum__Class>(type_info, "System.Security.Cryptography.X509Certificates", "OpenFlags");
        }
        inline app::OpenFlags__Enum* create() {
            return il2cpp::create_object<app::OpenFlags__Enum>(get_class());
        }
    } // namespace OpenFlags__Enum
} // namespace app::classes::types
