#pragma once
#include <Modloader/app/structs/MoonEffectRevertHandlePool.h>
#include <Modloader/app/structs/MoonEffectRevertHandlePool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectRevertHandlePool {
        inline app::MoonEffectRevertHandlePool__Class** type_info() {
            static app::MoonEffectRevertHandlePool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonEffectRevertHandlePool__Class**)(modloader::win::memory::resolve_rva(0x04781260));
            }
            return cache;
        }
        inline app::MoonEffectRevertHandlePool__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectRevertHandlePool__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectRevertHandlePool");
        }
        inline app::MoonEffectRevertHandlePool* create() {
            return il2cpp::create_object<app::MoonEffectRevertHandlePool>(get_class());
        }
    } // namespace MoonEffectRevertHandlePool
} // namespace app::classes::types
