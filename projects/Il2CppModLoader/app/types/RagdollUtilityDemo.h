#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RagdollUtilityDemo {
        namespace {
            app::RagdollUtilityDemo__Class* type_info_ref = nullptr;
        }
        app::RagdollUtilityDemo__Class** type_info = &type_info_ref;
        inline app::RagdollUtilityDemo__Class* get_class() {
            return il2cpp::get_class<app::RagdollUtilityDemo__Class>(type_info, "RootMotion.Demos", "RagdollUtilityDemo");
        }
        inline app::RagdollUtilityDemo* create() {
            return il2cpp::create_object<app::RagdollUtilityDemo>(get_class());
        }
    } // namespace RagdollUtilityDemo
} // namespace app::classes::types
