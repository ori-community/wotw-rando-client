#pragma once
#include <Modloader/app/structs/SetupStateModifierData__Array.h>
#include <Modloader/app/structs/SetupStateModifierData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetupStateModifierData__Array {
        inline app::SetupStateModifierData__Array__Class** type_info() {
            static app::SetupStateModifierData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetupStateModifierData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetupStateModifierData__Array__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifierData__Array__Class>(type_info(), "", "SetupStateModifierData[]");
        }
        inline app::SetupStateModifierData__Array* create() {
            return il2cpp::create_object<app::SetupStateModifierData__Array>(get_class());
        }
    } // namespace SetupStateModifierData__Array
} // namespace app::classes::types
