#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CounterstrikeEffectPositionOverride {
        namespace {
            inline app::CounterstrikeEffectPositionOverride__Class* type_info_ref = nullptr;
        }
        inline app::CounterstrikeEffectPositionOverride__Class** type_info = &type_info_ref;
        inline app::CounterstrikeEffectPositionOverride__Class* get_class() {
            return il2cpp::get_class<app::CounterstrikeEffectPositionOverride__Class>(type_info, "", "CounterstrikeEffectPositionOverride");
        }
        inline app::CounterstrikeEffectPositionOverride* create() {
            return il2cpp::create_object<app::CounterstrikeEffectPositionOverride>(get_class());
        }
    } // namespace CounterstrikeEffectPositionOverride
} // namespace app::classes::types
