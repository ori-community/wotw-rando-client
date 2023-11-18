#pragma once
#include <Modloader/app/structs/MoonEffectWispsRoot.h>
#include <Modloader/app/structs/MoonEffectWispsRoot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectWispsRoot {
        inline app::MoonEffectWispsRoot__Class** type_info() {
            static app::MoonEffectWispsRoot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectWispsRoot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectWispsRoot__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectWispsRoot__Class>(type_info(), "Moon.EffectsFramework.Wisps", "MoonEffectWispsRoot");
        }
        inline app::MoonEffectWispsRoot* create() {
            return il2cpp::create_object<app::MoonEffectWispsRoot>(get_class());
        }
    } // namespace MoonEffectWispsRoot
} // namespace app::classes::types
