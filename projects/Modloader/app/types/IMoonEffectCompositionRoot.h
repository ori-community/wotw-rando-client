#pragma once
#include <Modloader/app/structs/IMoonEffectCompositionRoot.h>
#include <Modloader/app/structs/IMoonEffectCompositionRoot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonEffectCompositionRoot {
        inline app::IMoonEffectCompositionRoot__Class** type_info() {
            static app::IMoonEffectCompositionRoot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoonEffectCompositionRoot__Class**)(modloader::win::memory::resolve_rva(0x04701498));
            }
            return cache;
        }
        inline app::IMoonEffectCompositionRoot__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectCompositionRoot__Class>(type_info(), "Moon.EffectsFramework", "IMoonEffectCompositionRoot");
        }
    } // namespace IMoonEffectCompositionRoot
} // namespace app::classes::types
