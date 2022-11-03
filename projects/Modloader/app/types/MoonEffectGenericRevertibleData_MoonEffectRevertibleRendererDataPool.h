#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class** type_info = (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class**)(modloader::win::memory::resolve_rva(0x0472FEA8));
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleRendererDataPool");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool
} // namespace app::classes::types
