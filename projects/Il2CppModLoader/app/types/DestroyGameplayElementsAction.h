#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyGameplayElementsAction {
        namespace {
            app::DestroyGameplayElementsAction__Class* type_info_ref = nullptr;
        }
        app::DestroyGameplayElementsAction__Class** type_info = &type_info_ref;
        inline app::DestroyGameplayElementsAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyGameplayElementsAction__Class>(type_info, "", "DestroyGameplayElementsAction");
        }
        inline app::DestroyGameplayElementsAction* create() {
            return il2cpp::create_object<app::DestroyGameplayElementsAction>(get_class());
        }
    } // namespace DestroyGameplayElementsAction
} // namespace app::classes::types
