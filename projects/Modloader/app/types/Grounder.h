#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Grounder {
        namespace {
            inline app::Grounder__Class* type_info_ref = nullptr;
        }
        inline app::Grounder__Class** type_info = &type_info_ref;
        inline app::Grounder__Class* get_class() {
            return il2cpp::get_class<app::Grounder__Class>(type_info, "RootMotion.FinalIK", "Grounder");
        }
        inline app::Grounder* create() {
            return il2cpp::create_object<app::Grounder>(get_class());
        }
    } // namespace Grounder
} // namespace app::classes::types
