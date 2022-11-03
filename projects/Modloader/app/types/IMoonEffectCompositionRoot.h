#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonEffectCompositionRoot {
        inline app::IMoonEffectCompositionRoot__Class** type_info = (app::IMoonEffectCompositionRoot__Class**)(modloader::win::memory::resolve_rva(0x04701498));
        inline app::IMoonEffectCompositionRoot__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectCompositionRoot__Class>(type_info, "Moon.EffectsFramework", "IMoonEffectCompositionRoot");
        }
    } // namespace IMoonEffectCompositionRoot
} // namespace app::classes::types
