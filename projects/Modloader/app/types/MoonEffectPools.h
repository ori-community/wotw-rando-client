#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectPools__Class.h>
#include <Modloader/app/structs/MoonEffectPools.h>

namespace app::classes::types {
    namespace MoonEffectPools {
        inline app::MoonEffectPools__Class** type_info = (app::MoonEffectPools__Class**)(modloader::win::memory::resolve_rva(0x0478BAB0));
        inline app::MoonEffectPools__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectPools__Class>(type_info, "", "MoonEffectPools");
        }
        inline app::MoonEffectPools* create() {
            return il2cpp::create_object<app::MoonEffectPools>(get_class());
        }
    } // namespace MoonEffectPools
} // namespace app::classes::types
