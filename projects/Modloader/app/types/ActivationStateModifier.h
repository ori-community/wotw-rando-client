#pragma once
#include <Modloader/app/structs/ActivationStateModifier.h>
#include <Modloader/app/structs/ActivationStateModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivationStateModifier {
        inline app::ActivationStateModifier__Class** type_info() {
            static app::ActivationStateModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivationStateModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivationStateModifier__Class* get_class() {
            return il2cpp::get_class<app::ActivationStateModifier__Class>(type_info(), "", "ActivationStateModifier");
        }
        inline app::ActivationStateModifier* create() {
            return il2cpp::create_object<app::ActivationStateModifier>(get_class());
        }
    } // namespace ActivationStateModifier
} // namespace app::classes::types
