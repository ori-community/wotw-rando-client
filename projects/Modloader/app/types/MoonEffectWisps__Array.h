#pragma once
#include <Modloader/app/structs/MoonEffectWisps__Array.h>
#include <Modloader/app/structs/MoonEffectWisps__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectWisps__Array {
        inline app::MoonEffectWisps__Array__Class** type_info() {
            static app::MoonEffectWisps__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectWisps__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectWisps__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectWisps__Array__Class>(type_info(), "Moon.EffectsFramework.Wisps", "MoonEffectWisps[]");
        }
        inline app::MoonEffectWisps__Array* create() {
            return il2cpp::create_object<app::MoonEffectWisps__Array>(get_class());
        }
    } // namespace MoonEffectWisps__Array
} // namespace app::classes::types
