#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CertificateProblem__Enum {
        namespace {
            inline app::CertificateProblem__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CertificateProblem__Enum__Class** type_info = &type_info_ref;
        inline app::CertificateProblem__Enum__Class* get_class() {
            return il2cpp::get_class<app::CertificateProblem__Enum__Class>(type_info, "System.Net", "CertificateProblem");
        }
        inline app::CertificateProblem__Enum* create() {
            return il2cpp::create_object<app::CertificateProblem__Enum>(get_class());
        }
    } // namespace CertificateProblem__Enum
} // namespace app::classes::types
