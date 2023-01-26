#pragma once
#include <Modloader/app/structs/MoonEffectRevertHandle__Array.h>
#include <Modloader/app/structs/MoonEffectRevertHandle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectRevertHandle__Array {
        inline app::MoonEffectRevertHandle__Array__Class** type_info() {
            static app::MoonEffectRevertHandle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectRevertHandle__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectRevertHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectRevertHandle__Array__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectRevertHandle[]");
        }
        inline app::MoonEffectRevertHandle__Array* create() {
            return il2cpp::create_object<app::MoonEffectRevertHandle__Array>(get_class());
        }
    } // namespace MoonEffectRevertHandle__Array
} // namespace app::classes::types
