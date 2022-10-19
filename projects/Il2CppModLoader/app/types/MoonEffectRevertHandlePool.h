#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectRevertHandlePool {
        inline app::MoonEffectRevertHandlePool__Class** type_info = (app::MoonEffectRevertHandlePool__Class**)(modloader::win::memory::resolve_rva(0x04781260));
        inline app::MoonEffectRevertHandlePool__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectRevertHandlePool__Class>(type_info, "Moon.EffectsFramework", "MoonEffectRevertHandlePool");
        }
        inline app::MoonEffectRevertHandlePool* create() {
            return il2cpp::create_object<app::MoonEffectRevertHandlePool>(get_class());
        }
    } // namespace MoonEffectRevertHandlePool
} // namespace app::classes::types
