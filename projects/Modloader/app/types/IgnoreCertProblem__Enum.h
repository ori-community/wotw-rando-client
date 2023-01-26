#pragma once
#include <Modloader/app/structs/IgnoreCertProblem__Enum.h>
#include <Modloader/app/structs/IgnoreCertProblem__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnoreCertProblem__Enum {
        inline app::IgnoreCertProblem__Enum__Class** type_info() {
            static app::IgnoreCertProblem__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnoreCertProblem__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnoreCertProblem__Enum__Class* get_class() {
            return il2cpp::get_class<app::IgnoreCertProblem__Enum__Class>(type_info(), "System.Net", "IgnoreCertProblem");
        }
        inline app::IgnoreCertProblem__Enum* create() {
            return il2cpp::create_object<app::IgnoreCertProblem__Enum>(get_class());
        }
    } // namespace IgnoreCertProblem__Enum
} // namespace app::classes::types
