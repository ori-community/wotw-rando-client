#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogTransition {
        namespace {
            app::DialogTransition__Class* type_info_ref = nullptr;
        }
        app::DialogTransition__Class** type_info = &type_info_ref;
        inline app::DialogTransition__Class* get_class() {
            return il2cpp::get_class<app::DialogTransition__Class>(type_info, "", "DialogTransition");
        }
        inline app::DialogTransition* create() {
            return il2cpp::create_object<app::DialogTransition>(get_class());
        }
    } // namespace DialogTransition
} // namespace app::classes::types
