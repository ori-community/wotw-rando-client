#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserControlAI {
        namespace {
            app::UserControlAI__Class* type_info_ref = nullptr;
        }
        app::UserControlAI__Class** type_info = &type_info_ref;
        inline app::UserControlAI__Class* get_class() {
            return il2cpp::get_class<app::UserControlAI__Class>(type_info, "RootMotion.Demos", "UserControlAI");
        }
        inline app::UserControlAI* create() {
            return il2cpp::create_object<app::UserControlAI>(get_class());
        }
    } // namespace UserControlAI
} // namespace app::classes::types
