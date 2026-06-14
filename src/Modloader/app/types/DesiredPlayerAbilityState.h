#pragma once
#include <Modloader/app/structs/DesiredPlayerAbilityState.h>
#include <Modloader/app/structs/DesiredPlayerAbilityState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredPlayerAbilityState {
        inline app::DesiredPlayerAbilityState__Class** type_info() {
            static app::DesiredPlayerAbilityState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredPlayerAbilityState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredPlayerAbilityState__Class* get_class() {
            return il2cpp::get_class<app::DesiredPlayerAbilityState__Class>(type_info(), "Moon.uberSerializationWisp", "DesiredPlayerAbilityState");
        }
        inline app::DesiredPlayerAbilityState* create() {
            return il2cpp::create_object<app::DesiredPlayerAbilityState>(get_class());
        }
    } // namespace DesiredPlayerAbilityState
} // namespace app::classes::types
