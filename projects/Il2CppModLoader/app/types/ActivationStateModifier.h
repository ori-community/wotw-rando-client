#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivationStateModifier {
        namespace {
            app::ActivationStateModifier__Class* type_info_ref = nullptr;
        }
        app::ActivationStateModifier__Class** type_info = &type_info_ref;
        inline app::ActivationStateModifier__Class* get_class() {
            return il2cpp::get_class<app::ActivationStateModifier__Class>(type_info, "", "ActivationStateModifier");
        }
        inline app::ActivationStateModifier* create() {
            return il2cpp::create_object<app::ActivationStateModifier>(get_class());
        }
    } // namespace ActivationStateModifier
} // namespace app::classes::types
