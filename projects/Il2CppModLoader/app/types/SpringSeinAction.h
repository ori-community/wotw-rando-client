#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpringSeinAction {
        namespace {
            app::SpringSeinAction__Class* type_info_ref = nullptr;
        }
        app::SpringSeinAction__Class** type_info = &type_info_ref;
        inline app::SpringSeinAction__Class* get_class() {
            return il2cpp::get_class<app::SpringSeinAction__Class>(type_info, "", "SpringSeinAction");
        }
        inline app::SpringSeinAction* create() {
            return il2cpp::create_object<app::SpringSeinAction>(get_class());
        }
    } // namespace SpringSeinAction
} // namespace app::classes::types
