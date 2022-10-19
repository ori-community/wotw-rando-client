#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IgnoreCertProblem__Enum {
        namespace {
            inline app::IgnoreCertProblem__Enum__Class* type_info_ref = nullptr;
        }
        inline app::IgnoreCertProblem__Enum__Class** type_info = &type_info_ref;
        inline app::IgnoreCertProblem__Enum__Class* get_class() {
            return il2cpp::get_class<app::IgnoreCertProblem__Enum__Class>(type_info, "System.Net", "IgnoreCertProblem");
        }
        inline app::IgnoreCertProblem__Enum* create() {
            return il2cpp::create_object<app::IgnoreCertProblem__Enum>(get_class());
        }
    } // namespace IgnoreCertProblem__Enum
} // namespace app::classes::types
