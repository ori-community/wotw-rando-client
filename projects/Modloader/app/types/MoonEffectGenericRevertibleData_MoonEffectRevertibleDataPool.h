#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class** type_info = (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class**)(modloader::win::memory::resolve_rva(0x04703940));
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleDataPool");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool
} // namespace app::classes::types
