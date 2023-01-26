#pragma once
#include <Modloader/app/structs/PassiveStateModifier.h>
#include <Modloader/app/structs/PassiveStateModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PassiveStateModifier {
        inline app::PassiveStateModifier__Class** type_info() {
            static app::PassiveStateModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PassiveStateModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PassiveStateModifier__Class* get_class() {
            return il2cpp::get_class<app::PassiveStateModifier__Class>(type_info(), "", "PassiveStateModifier");
        }
        inline app::PassiveStateModifier* create() {
            return il2cpp::create_object<app::PassiveStateModifier>(get_class());
        }
    } // namespace PassiveStateModifier
} // namespace app::classes::types
