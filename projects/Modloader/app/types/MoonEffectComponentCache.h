#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectComponentCache__Class.h>
#include <Modloader/app/structs/MoonEffectComponentCache.h>

namespace app::classes::types {
    namespace MoonEffectComponentCache {
        inline app::MoonEffectComponentCache__Class** type_info = (app::MoonEffectComponentCache__Class**)(modloader::win::memory::resolve_rva(0x04784F08));
        inline app::MoonEffectComponentCache__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectComponentCache__Class>(type_info, "Moon.EffectsFramework", "MoonEffectComponentCache");
        }
        inline app::MoonEffectComponentCache* create() {
            return il2cpp::create_object<app::MoonEffectComponentCache>(get_class());
        }
    } // namespace MoonEffectComponentCache
} // namespace app::classes::types
