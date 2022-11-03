#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectsResolver {
        inline app::MoonEffectsResolver__Class** type_info = (app::MoonEffectsResolver__Class**)(modloader::win::memory::resolve_rva(0x047066F0));
        inline app::MoonEffectsResolver__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectsResolver__Class>(type_info, "Moon.EffectsFramework", "MoonEffectsResolver");
        }
        inline app::MoonEffectsResolver* create() {
            return il2cpp::create_object<app::MoonEffectsResolver>(get_class());
        }
    } // namespace MoonEffectsResolver
} // namespace app::classes::types
