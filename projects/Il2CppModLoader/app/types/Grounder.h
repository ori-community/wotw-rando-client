#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Grounder {
        namespace {
            app::Grounder__Class* type_info_ref = nullptr;
        }
        app::Grounder__Class** type_info = &type_info_ref;
        inline app::Grounder__Class* get_class() {
            return il2cpp::get_class<app::Grounder__Class>(type_info, "RootMotion.FinalIK", "Grounder");
        }
        inline app::Grounder* create() {
            return il2cpp::create_object<app::Grounder>(get_class());
        }
    } // namespace Grounder
} // namespace app::classes::types
