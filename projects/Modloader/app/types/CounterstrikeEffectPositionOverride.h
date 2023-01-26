#pragma once
#include <Modloader/app/structs/CounterstrikeEffectPositionOverride.h>
#include <Modloader/app/structs/CounterstrikeEffectPositionOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CounterstrikeEffectPositionOverride {
        inline app::CounterstrikeEffectPositionOverride__Class** type_info() {
            static app::CounterstrikeEffectPositionOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CounterstrikeEffectPositionOverride__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CounterstrikeEffectPositionOverride__Class* get_class() {
            return il2cpp::get_class<app::CounterstrikeEffectPositionOverride__Class>(type_info(), "", "CounterstrikeEffectPositionOverride");
        }
        inline app::CounterstrikeEffectPositionOverride* create() {
            return il2cpp::create_object<app::CounterstrikeEffectPositionOverride>(get_class());
        }
    } // namespace CounterstrikeEffectPositionOverride
} // namespace app::classes::types
