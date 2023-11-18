#pragma once
#include <Modloader/app/structs/SetupStateModifierDrawerAttribute.h>
#include <Modloader/app/structs/SetupStateModifierDrawerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupStateModifierDrawerAttribute {
        inline app::SetupStateModifierDrawerAttribute__Class** type_info() {
            static app::SetupStateModifierDrawerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetupStateModifierDrawerAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetupStateModifierDrawerAttribute__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifierDrawerAttribute__Class>(type_info(), "", "SetupStateModifierDrawerAttribute");
        }
        inline app::SetupStateModifierDrawerAttribute* create() {
            return il2cpp::create_object<app::SetupStateModifierDrawerAttribute>(get_class());
        }
    } // namespace SetupStateModifierDrawerAttribute
} // namespace app::classes::types
