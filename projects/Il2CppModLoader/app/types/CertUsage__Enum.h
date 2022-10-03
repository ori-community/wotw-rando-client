#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CertUsage__Enum {
        namespace {
            app::CertUsage__Enum__Class* type_info_ref = nullptr;
        }
        app::CertUsage__Enum__Class** type_info = &type_info_ref;
        inline app::CertUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::CertUsage__Enum__Class>(type_info, "System.Net", "CertUsage");
        }
        inline app::CertUsage__Enum* create() {
            return il2cpp::create_object<app::CertUsage__Enum>(get_class());
        }
    } // namespace CertUsage__Enum
} // namespace app::classes::types
