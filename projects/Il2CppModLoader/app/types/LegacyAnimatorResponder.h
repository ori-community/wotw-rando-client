#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyAnimatorResponder {
        namespace {
            app::LegacyAnimatorResponder__Class* type_info_ref = nullptr;
        }
        app::LegacyAnimatorResponder__Class** type_info = &type_info_ref;
        inline app::LegacyAnimatorResponder__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimatorResponder__Class>(type_info, "", "LegacyAnimatorResponder");
        }
        inline app::LegacyAnimatorResponder* create() {
            return il2cpp::create_object<app::LegacyAnimatorResponder>(get_class());
        }
    } // namespace LegacyAnimatorResponder
} // namespace app::classes::types
