#pragma once
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class** type_info() {
            static app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class**)(modloader::win::memory::resolve_rva(0x04794790));
            }
            return cache;
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleParticleDataPool");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool
} // namespace app::classes::types
