#pragma once
#include <Modloader/app/structs/MoonEffectPools.h>
#include <Modloader/app/structs/MoonEffectPools__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectPools {
        inline app::MoonEffectPools__Class** type_info() {
            static app::MoonEffectPools__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonEffectPools__Class**)(modloader::win::memory::resolve_rva(0x0478BAB0));
            }
            return cache;
        }
        inline app::MoonEffectPools__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectPools__Class>(type_info(), "", "MoonEffectPools");
        }
        inline app::MoonEffectPools* create() {
            return il2cpp::create_object<app::MoonEffectPools>(get_class());
        }
    } // namespace MoonEffectPools
} // namespace app::classes::types
