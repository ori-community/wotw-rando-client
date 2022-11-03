#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class** type_info = (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class**)(modloader::win::memory::resolve_rva(0x04794790));
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleParticleDataPool");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool
} // namespace app::classes::types
