#pragma once
#include <Modloader/app/structs/DestroyGameplayElementsAction.h>
#include <Modloader/app/structs/DestroyGameplayElementsAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyGameplayElementsAction {
        inline app::DestroyGameplayElementsAction__Class** type_info() {
            static app::DestroyGameplayElementsAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyGameplayElementsAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyGameplayElementsAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyGameplayElementsAction__Class>(type_info(), "", "DestroyGameplayElementsAction");
        }
        inline app::DestroyGameplayElementsAction* create() {
            return il2cpp::create_object<app::DestroyGameplayElementsAction>(get_class());
        }
    } // namespace DestroyGameplayElementsAction
} // namespace app::classes::types
